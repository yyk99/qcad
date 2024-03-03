if(WIN32)
    set(RC spatialindex.rc)
endif()

if(MSVC)
    set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
    #set(BUILD_SHARED_LIBS TRUE)
endif()

add_library(qcadspatialindex SHARED
    RSpatialIndexNavel.cpp RSpatialIndexNavel.h
    ${RC}
)
target_include_directories(qcadspatialindex PUBLIC
    ../../src/3rdparty/spatialindexnavel
    ../../src/core
    ../../src/core/math
    ../../src/entity
    ../../src/spatialindex
)

target_compile_definitions(qcadspatialindex PUBLIC
    QCADSPATIALINDEX_LIBRARY
    QCAD_DLL
)

target_link_libraries(qcadspatialindex PUBLIC
    Qt::Core
    Qt::Gui
    Qt::Widgets
    Qt::PrintSupport
    qcadcore
    spatialindexnavel
)

