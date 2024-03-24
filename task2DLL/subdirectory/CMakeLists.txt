cmake_minimum_required (VERSION 3.8)

set (CMAKE_ARCHIVE_OUTPUT_DIRECTORY ../library)
project ("subdirectory")
set (SOURCE_DLL Leaver.cpp)
add_library (dll SHARED ${SOURCE_DLL})