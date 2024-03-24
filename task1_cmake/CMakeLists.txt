cmake_minimum_required (VERSION 3.8)

# Включение горячей перезагрузки для компиляторов MSVC, если поддерживается.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()



project ("task1_cmake")
message (loading...)
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ./bin)


set (SOURCE_EXE ./src/main.cpp)
set (SOURCE_LIB ./Lib1/Greater.cpp)
add_library (greeter_lib STATIC ${SOURCE_LIB})
add_executable (exe ${SOURCE_EXE})
target_link_libraries (exe greeter_lib)


# Включите подпроекты.
# add_sub..указываем если там лежит еще один CMakeLists.txt
# add_subdirectory ("Lib1")
# Где еще посмотреть что нехватает
include_directories ("Lib1")


if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET exe PROPERTY CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)
endif()

