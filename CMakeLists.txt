cmake_minimum_required(VERSION 3.18)

project(DST)

find_package(Deamer REQUIRED)

add_subdirectory(DST_Setting)
add_subdirectory(DST_Main)

add_library(DST_external_libraries STATIC "${DST_SOURCE_DIR}/lib/DST.cpp")
target_link_libraries(DST_external_libraries PUBLIC Deamer DST_Main_static_library DST_Setting_static_library)
target_include_directories(DST_external_libraries PUBLIC "${DST_SOURCE_DIR}/extern" "${DST_SOURCE_DIR}/include" "${DST_Setting_SOURCE_DIR}/include" "${DST_Main_SOURCE_DIR}/include")

function(DST_add_external_library external_library_name source_files)
	set(external_library_full_name "DST_${external_library_name}_static_library")

	add_library(${external_library_full_name} STATIC ${source_files})

	target_link_libraries(${external_library_full_name} PUBLIC Deamer)
	target_include_directories(${external_library_full_name} PRIVATE "${DST_SOURCE_DIR}/extern" "${DST_SOURCE_DIR}/include")
	target_compile_features(${external_library_full_name} PUBLIC cxx_std_17)
	set_target_properties(${external_library_full_name} PROPERTIES LINKED_LANGUAGE CXX)
	
	target_link_libraries(DST_external_libraries PUBLIC ${external_library_full_name})
	
endfunction()

add_subdirectory(extern)
add_subdirectory(lib)

add_executable(DST "main.cpp")
target_link_libraries(DST DST_static_library)

install(TARGETS DST)