cmake_minimum_required(VERSION 3.18)

project(DST_Setting)

find_package(Deamer_External REQUIRED)

add_library(DST_Setting_external_libraries STATIC "${DST_Setting_SOURCE_DIR}/lib/DST_Setting.cpp")
target_link_libraries(DST_Setting_external_libraries PUBLIC Deamer_External)
target_include_directories(DST_Setting_external_libraries PUBLIC "${DST_Setting_SOURCE_DIR}/extern" "${DST_Setting_SOURCE_DIR}/include" "${DST_SOURCE_DIR}/include" "${DST_SOURCE_DIR}/DST_Main/Include")

function(DST_Setting_add_external_library external_library_name source_files)
	set(external_library_full_name "DST_Setting_${external_library_name}_static_library")

	add_library(${external_library_full_name} STATIC ${source_files})

	target_link_libraries(${external_library_full_name} PUBLIC Deamer_External)
	target_include_directories(${external_library_full_name} PRIVATE "${DST_Setting_SOURCE_DIR}/extern" "${DST_Setting_SOURCE_DIR}/include")
	target_compile_features(${external_library_full_name} PUBLIC cxx_std_17)
	set_target_properties(${external_library_full_name} PROPERTIES LINKED_LANGUAGE CXX)
	
	target_link_libraries(DST_Setting_external_libraries PUBLIC ${external_library_full_name})
	
endfunction()

add_subdirectory(extern)
add_subdirectory(lib)

add_executable(DST_Setting_main "main.cpp")
target_link_libraries(DST_Setting_main DST_Setting_static_library)
