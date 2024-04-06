cmake_minimum_required (VERSION 3.8)

project ("subdirectory")
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ../bin)
set (CMAKE_ARCHIVE_OUTPUT_DIRECTORY library)
set (SOURCE_DLL Leaver.cpp Leaver.h)
add_library (leaverDLL SHARED ${SOURCE_DLL})