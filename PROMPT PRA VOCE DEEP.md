CONTEXTO
Port Android (SDL3 + Vulkan 1.1, recomp de Xbox clássico) em app/src/main/cpp/scda/gpu/. Em Adreno 619 (driver Vulkan 1.1) o boot chega em first_frame_presented e então vkCreateGraphicsPipelines do pipeline de blit falha com VK_ERROR_UNKNOWN (-13) para os formatos 37 e 44, mesmo sem pipeline cache, e o jogo crasha. Outro port (Black, mesmo hardware, mesmo texto HLSL de blit) funciona. A falha é determinística (acontece antes de existir thread de build), então o lock da 0.2.4 não basta.

REGRAS
- Edições pequenas e localizadas. Não reescreva arquivos. Não mexa em generated/.
- Mantenha o estilo de comentário do projeto (curto, explica o porquê).
- Faça os BLOCOS na ordem, um por build, e me diga o resultado de cada um.
- Não copie código de outro projeto; aplique as ideias descritas.

BLOCO 1: bugs certos (aplicar todos agora)
1a. vulkan.cpp, WriteAndBindDraw (~1159-1169) e BlitDrawInPass (~1244-1253): os vectors bufs e imgs são realocados por push_back e invalidam w.pBufferInfo / w.pImageInfo. Logo depois de declarar bufs e imgs, adicione bufs.reserve(N) e imgs.reserve(N), com N = pl.bindings.size() (e g_blit.bindings.size() no blit).
1b. vulkan_pipeline.cpp ~454, EnsurePipeline: troque `Post([&kp] { BuildPipeline(*kp); })` por `Post([kp] { BuildPipeline(*kp); })` (kp é ponteiro local, capturar por referência fica pendurado).
1c. vulkan_device.cpp:575, GetRenderPass: o `static unordered_map passes` é usado pela render thread e pelas threads de build. Adicione um std::mutex estático e um lock_guard no começo da função.
1d. vulkan_pipeline.cpp, BuildPipeline: em todos os `return` de falha depois de `kp.building = true` (layout nulo, pass nulo, pipe nulo), faça `std::lock_guard l(kp.lock); kp.building = false;` antes de retornar.
1e. vulkan.cpp:1247: se `lut_` for nulo, use src.read no lugar de lut_->read (ou aborte o blit sem crash).
1f. g_pipe_create_lock hoje é static dentro de vulkan_pipeline.cpp. Exponha-o (extern em vulkan_internal.h, definido em um .cpp) e pegue o mesmo lock em CollectPipelineCache (vulkan_device.cpp ~828) em volta dos dois vkGetPipelineCacheData.

BLOCO 2: diagnóstico do -13 (sem mudar comportamento)
2a. Em BuildBlitPipeline (vulkan_pipeline.cpp ~399), quando falhar, logue: VkResult por nome, VkFormat, e o tamanho/versão do SPIR-V dos dois módulos (words 1 e 3 do header).
2b. Escreva os SPIR-V do blit (vs e fs) em <files>/logs/blit_vs.spv e blit_fs.spv na primeira vez que forem compilados. Logue a lista de OpCapability, OpExtension e OpExtInstImport de cada um (um parser curto em cima do binário basta). Isso mostra se há extensão que o driver não conhece (por exemplo SPV_KHR_non_semantic_info ou NonSemantic.* vindos do debug info).
2c. No início do device, logue as extensões do device e vkGetPhysicalDeviceFeatures (samplerAnisotropy, fillModeNonSolid).

BLOCO 3: hipóteses do -13, testar uma por build e parar na primeira que resolver
3a. Em CompileHlsl (vulkan_shader.cpp): troque shaderc_optimization_level_performance por shaderc_optimization_level_zero. O Black compila com o otimizador desligado. Mantenha o debug info, porque a reflexão por nome depende dele.
3b. Se 3a não resolver: elimine a dependência de OpName/reflexão/patch binário. Para o blit, escreva os bindings no próprio HLSL com [[vk::binding(N,0)]], usando os mesmos números que RewriteBindings já usa (cbuffer B=1, img=4, lut=5, ls=8, ps=9), e monte o layout do blit à mão com esses 5 bindings (UNIFORM_BUFFER, 2x SAMPLED_IMAGE, 2x SAMPLER; stageFlags VS|FS). Com isso desligue generate_debug_info para os módulos do blit e pule RewriteBindings e o patch de entry point para eles.
3c. Se 3b resolver, estenda a mesma ideia a todos os shaders do jogo: um VkDescriptorSetLayout/VkPipelineLayout global e fixo (b0, b1, tex0-3, smp0-3 nos números que o renderer já usa), bindings fixados por [[vk::binding]] ou por shaderc_compile_options_set_binding_base, e remova ReflectSpirv, RewriteBindings e o patch do entry point (o OpEntryPoint calcula `room = (len-4)*4`, o que só é correto com 1 interface id; hoje só não corrompe porque o nome já é "main").
3d. Se nada acima resolver: gere o SPIR-V do blit com glslang direto (SPIR-V 1.3, disableOptimizer, sem debug info, setHlslIoMapping, setAutoMapBindings, setShiftBinding) e compare com o do shaderc.

BLOCO 4: device features (vulkan_device.cpp ~157-168)
vkCreateDevice não habilita feature alguma, mas o código usa anisotropyEnable (vulkan.cpp:1107) e polygonMode LINE (vulkan_pipeline.cpp:195). Chame vkGetPhysicalDeviceFeatures, habilite só samplerAnisotropy e fillModeNonSolid quando suportados (dc.pEnabledFeatures), guarde os booleans no Ctx, e: anisotropyEnable só se samplerAnisotropy habilitado (senão aniso_cap=1), polygonMode LINE só se fillModeNonSolid (senão FILL).

BLOCO 5: pipeline cache (vulkan_device.cpp:241)
O VkPipelineCache é criado vazio e o blob que SavePipelineCache grava nunca é relido. Leia o arquivo que SavePipelineCache escreve (l.file em pipeline_cache.cpp) e passe como pInitialData. Se vkCreatePipelineCache falhar com os dados, recrie vazio e apague o arquivo. Se o blit ainda falhar depois do Bloco 3, teste uma build com pipe_cache = VK_NULL_HANDLE em todos os vkCreateGraphicsPipelines.

BLOCO 6: robustez do blit
Em BuildBlitPipeline, memorize a falha (null no mapa, com limite de 3 tentativas) para não recompilar e logar a cada frame. Em BlitDrawInPass, o `if (!pipe) return;` já existe: mantenha.

ENTREGA (a cada build)
Diga qual bloco aplicou, o diff resumido, e cole as linhas `vulkan:` do log novo. Se o jogo ainda crashar, peça o `adb logcat -d` (procure `signal 11`, `F DEBUG`, `Adreno`) e os arquivos blit_vs.spv / blit_fs.spv. Se possível, rode também com spirv-val --target-env vulkan1.1 neles.