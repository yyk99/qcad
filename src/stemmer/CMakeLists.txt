if(WIN32)
    set(RC stemmer.rc)
endif()

add_library(qcadstemmer SHARED
    RStemmer.cpp RStemmer.h
    ${RC}
)

target_include_directories(qcadstemmer PRIVATE
    ../../src/3rdparty
    ../../src/core
    ../../src/core/math
    ../../src/entity
    .
)

target_compile_definitions(qcadstemmer PRIVATE
    QCADSTEMMER_LIBRARY
    QCAD_DLL
)

target_link_libraries(qcadstemmer PRIVATE
    Qt::Core
    stemmer
)

