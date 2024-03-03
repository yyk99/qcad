#
#
#



if(rtest)
    qt_add_resources(SOURCES scripts.qrc)
else()
    qt_add_resources(SOURCES scripts_release.qrc)
endif()

if(WIN32)
    set(RC scripts.rc)
endif()

add_library(qcadscripts SHARED
    RScriptsPlugin.cpp RScriptsPlugin.h
    ${SOURCES}
    ${RC}
)
target_include_directories(qcadscripts PRIVATE
    ../../src/core
    ../../src/core/math
)

target_compile_definitions(qcadscripts PRIVATE
    QCAD_DLL
)

set_target_properties(qcaddxf PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/plugins)
set_target_properties(qcaddxf PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/plugins)
set_target_properties(qcaddxf PROPERTIES ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/plugins)

target_link_libraries(qcadscripts PRIVATE
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


