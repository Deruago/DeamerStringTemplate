# This file is auto-generated and auto-maintained.
# Please don't change code in this file, as new changes will be discarded,
# when Deamer regenerates the project.
#
# If you want to contribute to Deamer.
# Please visit: https://github.com/Deruago/theDeamerProject 
#
# This file is part of the directory: lib

file(GLOB_RECURSE SOURCE_LIST "${DST_Setting_SOURCE_DIR}/lib/*.cpp")

add_library(DST_Setting_static_library STATIC ${SOURCE_LIST})

target_include_directories(DST_Setting_static_library PUBLIC "${DST_Setting_SOURCE_DIR}/extern" "${DST_Setting_SOURCE_DIR}/include")
target_compile_features(DST_Setting_static_library PUBLIC cxx_std_17)
set_target_properties(DST_Setting_static_library PROPERTIES LINKER_LANGUAGE CXX)

target_link_libraries(DST_Setting_static_library PUBLIC DST_Setting_external_libraries)

add_library(DST_Setting_shared_library SHARED ${SOURCE_LIST})

target_include_directories(DST_Setting_shared_library PUBLIC "${DST_Setting_SOURCE_DIR}/extern" "${DST_Setting_SOURCE_DIR}/include")
target_compile_features(DST_Setting_shared_library PUBLIC cxx_std_17)
set_target_properties(DST_Setting_shared_library PROPERTIES LINKER_LANGUAGE CXX)

target_link_libraries(DST_Setting_shared_library PUBLIC DST_Setting_external_libraries)

add_subdirectory(Flex)
add_subdirectory(Bison)
add_subdirectory(Ast)
