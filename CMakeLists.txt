#
#
#
cmake_minimum_required(VERSION 3.16)
project(qcad VERSION 1.0 LANGUAGES CXX)

set(PROJECT_ROOT_DIR ${PROJECT_SOURCE_DIR})

option(BUILD_QT6 "Building with Qt 6.x" ON)

include(CMakeInclude.txt)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

find_package(${QT_VER} REQUIRED COMPONENTS Core Widgets Concurrent Gui Network OpenGL Sql Svg Xml PrintSupport Qml)
IF(NOT BUILD_QT6)
    find_package(${QT_VER} REQUIRED COMPONENTS Script XmlPatterns)
ENDIF()

qt_standard_project_setup()

add_subdirectory(src)
