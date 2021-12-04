# This file is auto-generated and auto-maintained.
# Please don't change code in this file, as new changes will be discarded,
# when Deamer regenerates the project.
#
# If you want to contribute to Deamer.
# Please visit: https://github.com/Deruago/theDeamerProject 

find_package(Deamer_External REQUIRED)
find_package(Deamer_Algorithm REQUIRED)


add_library(DST_external_libraries STATIC "${DST_SOURCE_DIR}/lib/DST.cpp")
target_link_libraries(DST_external_libraries PUBLIC Deamer_External)
target_link_libraries(DST_external_libraries PUBLIC Deamer_Algorithm)
target_include_directories(DST_external_libraries PUBLIC "${DST_SOURCE_DIR}/extern" "${DST_SOURCE_DIR}/include")

add_library(DST_static_library STATIC)
target_compile_features(DST_static_library PUBLIC cxx_std_17)
set_target_properties(DST_static_library PROPERTIES LINKER_LANGUAGE CXX)

target_link_libraries(DST_static_library PUBLIC DST_external_libraries Deamer_External Deamer_Algorithm)

add_library(DST_shared_library SHARED)
target_compile_features(DST_shared_library PUBLIC cxx_std_17)
set_target_properties(DST_shared_library PROPERTIES LINKER_LANGUAGE CXX)

target_link_libraries(DST_shared_library PUBLIC DST_external_libraries Deamer_External Deamer_Algorithm)

function(DST_root_library_extend projectname extern_directory include_directory source_files)
	target_sources(DST_static_library PRIVATE ${source_files})
	target_sources(DST_shared_library PRIVATE ${source_files})

	target_include_directories(DST_static_library PUBLIC ${extern_directory} ${include_directory})
	target_include_directories(DST_shared_library PUBLIC ${extern_directory} ${include_directory})
endfunction()


function(DST_add_external_library external_library_name source_files)
	set(external_library_full_name "DST_${external_library_name}_static_library")
	add_library(${external_library_full_name} STATIC ${source_files})

	target_link_libraries(${external_library_full_name} PUBLIC Deamer_External)
	target_link_libraries(${external_library_full_name} PUBLIC Deamer_Algorithm)
	target_include_directories(${external_library_full_name} PRIVATE "${DST_SOURCE_DIR}/extern" "${DST_SOURCE_DIR}/include")
	target_compile_features(${external_library_full_name} PUBLIC cxx_std_17)
	set_target_properties(${external_library_full_name} PROPERTIES LINKED_LANGUAGE CXX)
	set_property(TARGET ${external_library_full_name} PROPERTY POSITION_INDEPENDENT_CODE ON)
	
	target_link_libraries(DST_external_libraries PUBLIC ${external_library_full_name})
endfunction()

add_subdirectory(DST_Main)
add_subdirectory(DST_Setting)
