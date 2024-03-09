#
#
#

if(WIN32)
    set(RC dxf.rc)
endif()

add_library(qcaddxf SHARED
    RDxfExporter.cpp RDxfExporter.h
    RDxfExporterFactory.cpp RDxfExporterFactory.h
    RDxfImporter.cpp RDxfImporter.h
    RDxfImporterFactory.cpp RDxfImporterFactory.h
    RDxfPlugin.cpp RDxfPlugin.h
    ${RC}
)

target_include_directories(qcaddxf PRIVATE
    ../../../src/3rdparty
    ../../../src/core
    ../../../src/entity
    ../../../src/operations
    ../../../src/core/math
    ../../../src/io/dxf
)

target_compile_definitions(qcaddxf PRIVATE
    QCADDXF_LIBRARY
    QCAD_DLL
)

set_target_properties(qcaddxf PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin/plugins)
set_target_properties(qcaddxf PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin/plugins)
set_target_properties(qcaddxf PROPERTIES ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin/plugins)

target_link_libraries(qcaddxf PRIVATE
    Qt::Core
    Qt::Gui
    Qt::Widgets
    Qt::Network
    Qt::OpenGL
    Qt::Sql
    Qt::Svg
    Qt::Xml
    qcadcore
    qcadentity
    qcadoperations
    dxflib
)

