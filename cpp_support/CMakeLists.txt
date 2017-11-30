find_package(Boost REQUIRED)
include_directories(${Boost_INCLUDE_DIR})

add_library(cpp_support list_init.cpp name_lookup.cpp
        counter_macro.cpp generate_definitions.cpp
        msvc_extentions.cpp invert_if.cpp
        unique_ptr.cpp Ball.h Game.cpp)