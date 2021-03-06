# This file is auto-generated and auto-maintained.
# Please don't change code in this file, as new changes will be discarded,
# when Deamer regenerates the project.
#
# If you want to contribute to Deamer.
# Please visit: https://github.com/Deruago/theDeamerProject 

include(GNUInstallDirs)





add_library(DST_static_library STATIC)
target_compile_features(DST_static_library PUBLIC cxx_std_17)
set_target_properties(DST_static_library PROPERTIES LINKER_LANGUAGE CXX)

target_include_directories(DST_static_library PUBLIC 
		$<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>
)
target_link_libraries(DST_static_library PUBLIC Deamer::External Deamer::Algorithm)


function(DST_root_library_extend projectname extern_directory include_directory source_files)
	target_sources(DST_static_library PRIVATE ${source_files})

	target_include_directories(DST_static_library PUBLIC 
		$<BUILD_INTERFACE:${include_directory}>
		$<BUILD_INTERFACE:${extern_directory}>
	)
endfunction()


add_library(deamer_reserved_DST_core_library ALIAS DST_static_library)

function(DST_add_external_library external_library_name source_files)
	target_sources(DST_static_library PRIVATE ${source_files})
endfunction()

add_subdirectory(DST_Main)
add_subdirectory(DST_Setting)



