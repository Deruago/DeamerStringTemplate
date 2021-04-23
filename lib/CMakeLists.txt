# This file is auto-generated and auto-maintained.
# Please don't change code in this file, as new changes will be discarded,
# when Deamer regenerates the project.
#
# If you want to contribute to Deamer.
# Please visit: https://github.com/Deruago/theDeamerProject 
#
# This file is part of the directory: lib

file(GLOB_RECURSE SOURCE_LIST "${DST_SOURCE_DIR}/lib/*.cpp")

add_library(DST_static_library STATIC ${SOURCE_LIST})

target_include_directories(DST_static_library PUBLIC "${DST_SOURCE_DIR}/extern" "${DST_SOURCE_DIR}/include")
target_compile_features(DST_static_library PUBLIC cxx_std_17)
set_target_properties(DST_static_library PROPERTIES LINKER_LANGUAGE CXX)

target_link_libraries(DST_static_library PUBLIC DST_external_libraries)

add_library(DST_shared_library SHARED ${SOURCE_LIST})

target_include_directories(DST_shared_library PUBLIC "${DST_SOURCE_DIR}/extern" "${DST_SOURCE_DIR}/include")
target_compile_features(DST_shared_library PUBLIC cxx_std_17)
set_target_properties(DST_shared_library PROPERTIES LINKER_LANGUAGE CXX)

target_link_libraries(DST_shared_library PUBLIC DST_external_libraries)

