if(WIN32)
    set(RC grid.rc)
endif()

add_library(qcadgrid SHARED
    ROrthoGrid.cpp ROrthoGrid.h
    ${RC}
)

target_include_directories(qcadgrid PUBLIC
    ../../src/core
    ../../src/core/math
    ../../src/entity
    ../../src/gui
)

target_compile_definitions(qcadgrid PRIVATE
    QCADGRID_LIBRARY
    QCAD_DLL
)

target_link_libraries(qcadgrid PUBLIC
    # Remove: L${CMAKE_CURRENT_SOURCE_DIR}/
    Qt::Core
    Qt::Gui
    Qt::Widgets
    Qt::Network
    Qt::OpenGL
    Qt::Sql
    Qt::Svg
    Qt::Xml
    qcadcore
)

if(win32-msvc2010)
    target_compile_definitions(qcadgrid PRIVATE
        _CRT_SECURE_NO_WARNINGS
    )
endif()

