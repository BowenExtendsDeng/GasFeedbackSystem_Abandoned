LIBTORCH_DIR = D:/Work-Coding/.Libraries/libtorch

INCLUDEPATH += \
    $${LIBTORCH_DIR}/include \
    $${LIBTORCH_DIR}/include/torch/csrc/api/include

DEPENDPATH+=\
    $${LIBTORCH_DIR}/include \
    $${LIBTORCH_DIR}/include/torch/csrc/api/include

LIBS +=\
     -L$${LIBTORCH_DIR}/lib \
    -lc10 \
    -ltorch \
    -ltorch_cpu \
    -ltorch_cuda \
    -lc10d \
    -lc10_cuda \
    -lcaffe2_detectron_ops_gpu \
    -lcaffe2_module_test_dynamic \
    -lcaffe2_nvrtc \
    -lasmjit \
    -lclog \
    -lcpuinfo \
    -ldnnl \
    -lfbgemm \
    -lgloo \
    -lgloo_cuda \
    -llibprotobuf \
    -llibprotobuf-lite \
    -llibprotoc \
    -lmkldnn    \
    -INCLUDE:?warp_size@cuda@at@@YAHXZ    #必须得加 否则无法使用cuda
