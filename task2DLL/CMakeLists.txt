cmake_minimum_required (VERSION 3.8)

# Включение горячей перезагрузки для компиляторов MSVC, если поддерживается.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()




project ("task2DLL")
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ./bin)
set (SOURCE_EXE ./src/main.cpp)
add_executable (exe ${SOURCE_EXE})
target_link_libraries (exe dll)





# Включите подпроекты.
# add_subdirectory() указываем если там лежит еще один CMakeLists.txt
add_subdirectory ("subdirectory")
# ?
include_directories ("subdirectory")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET exe PROPERTY CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)
endif()

