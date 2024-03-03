if(WIN32)
    set(RC operations.rc)
endif()

add_library(qcadoperations SHARED
    RAddObjectOperation.cpp RAddObjectOperation.h
    RAddObjectsOperation.cpp RAddObjectsOperation.h
    RChangePropertyOperation.cpp RChangePropertyOperation.h
    RClickReferencePointOperation.cpp RClickReferencePointOperation.h
    RClipboardOperation.cpp RClipboardOperation.h
    RCopyOperation.cpp RCopyOperation.h
    RDeleteAllEntitiesOperation.cpp RDeleteAllEntitiesOperation.h
    RDeleteObjectOperation.cpp RDeleteObjectOperation.h
    RDeleteObjectsOperation.cpp RDeleteObjectsOperation.h
    RDeleteSelectionOperation.cpp RDeleteSelectionOperation.h
    RMixedOperation.cpp RMixedOperation.h
    RModifyObjectOperation.cpp RModifyObjectOperation.h
    RModifyObjectsOperation.cpp RModifyObjectsOperation.h
    RMoveReferencePointOperation.cpp RMoveReferencePointOperation.h
    RMoveSelectionOperation.cpp RMoveSelectionOperation.h
    ROperationUtils.cpp ROperationUtils.h
    RPasteOperation.cpp RPasteOperation.h
    RScaleSelectionOperation.cpp RScaleSelectionOperation.h
    RTransformation.h
    RTranslation.h
    ${RC}
)
target_include_directories(qcadoperations PUBLIC
    ../../src/3rdparty
    ../../src/core
    ../../src/core/math
    ../../src/entity
    ../../src/grid
    ../../src/gui
    ../../src/operations
)

target_compile_definitions(qcadoperations PRIVATE
    QCADOPERATIONS_LIBRARY
    QCAD_DLL
)

target_link_libraries(qcadoperations PUBLIC
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
    qcadentity
)

