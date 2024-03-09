#
#
#

if(WIN32)
    set(RC customwidgets.rc)
endif()

add_library(qcadcustomwidgets SHARED
    RCharacterWidgetPlugin.cpp RCharacterWidgetPlugin.h
    RColorComboPlugin.cpp RColorComboPlugin.h
    RCommandLinePlugin.cpp RCommandLinePlugin.h
    RCustomWidgets.cpp RCustomWidgets.h
    RFontChooserWidgetPlugin.cpp RFontChooserWidgetPlugin.h
    RGraphicsViewQtPlugin.cpp RGraphicsViewQtPlugin.h
    RLinetypeComboPlugin.cpp RLinetypeComboPlugin.h
    RLineweightComboPlugin.cpp RLineweightComboPlugin.h
    RListViewPlugin.cpp RListViewPlugin.h
    RMathComboBoxPlugin.cpp RMathComboBoxPlugin.h
    RMathLineEditPlugin.cpp RMathLineEditPlugin.h
    RMdiChildQtPlugin.cpp RMdiChildQtPlugin.h
    RRulerQtPlugin.cpp RRulerQtPlugin.h
    RShortcutLineEditPlugin.cpp RShortcutLineEditPlugin.h
    RTextEditPlugin.cpp RTextEditPlugin.h
    ${RC}
)
target_include_directories(qcadcustomwidgets PRIVATE
    ../../src/core
    ../../src/core/math
    ../../src/entity
    ../../src/gui
)

target_compile_definitions(qcadcustomwidgets PRIVATE
    QCAD_DLL
)

set_target_properties(qcaddxf PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin/plugins)
set_target_properties(qcaddxf PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin/plugins)
set_target_properties(qcaddxf PROPERTIES ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin/plugins)

target_link_libraries(qcadcustomwidgets PRIVATE
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
    qcadgui
)
