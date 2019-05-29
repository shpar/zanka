cmake_minimum_required(VERSION 3.1.0)
project(zanka)

set(CMAKE_VERBOSE_MAKEFILE TRUE)

add_definitions("-std=c++11")

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup(KEEP_RPATHS)

set(CMAKE_AUTOMOC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOUIC ON)
#include(${CMAKE_SOURCE_DIR}/../juce-cmake/cmake/FindJUCE.cmake)
set(CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/../juce-cmake/cmake)

message(${CMAKE_SOURCE_DIR}/../juce-cmake/cmake/FindJUCE.cmake)
find_package(Qt5Core CONFIG REQUIRED)
find_package(JUCE REQUIRED 
	COMPONENTS 
		juce_core
		juce_data_structures
		juce_events
		juce_graphics
		juce_gui_basics
		juce_gui_extra
)

add_executable(zanka src/zanka.cpp)
set_target_properties(${PROJECT_NAME} PROPERTIES MACOSX_BUNDLE true)
target_link_libraries(zanka ${CONAN_LIBS} Qt5::Core ${JUCE_LIBRARIES})
