cmake_minimum_required(VERSION 3.16)

project(DST)

find_package(Deamer_External REQUIRED)
find_package(Deamer_Algorithm REQUIRED)

include(deamer.cmake)

add_subdirectory(extern)
add_subdirectory(lib)

option(TESTS "Enables all the tests" ON)
if(TESTS)
	message(STATUS "Tests are now available.")
	add_subdirectory(tests)
endif()

option(APPLICATIONS "Enables all the applications" ON)
if(APPLICATIONS)
	message(STATUS "Applications are now available.")
	add_subdirectory(sources)
endif()

add_executable(DST "main.cpp")
target_compile_features(DST PUBLIC cxx_std_17)
target_link_libraries(DST DST_static_library)

install(TARGETS DST)