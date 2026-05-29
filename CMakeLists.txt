cmake_minimum_required(VERSION 3.20)
project(sort C)

set(CMAKE_C_STANDARD 23)

file(GLOB SRC_FILES CONFIGURE_DEPENDS
        src/*.c
)

add_executable(sort ${SRC_FILES})

target_include_directories(sort PRIVATE include)

target_link_libraries(sort PRIVATE m)

target_compile_options(sort PRIVATE
        -Wall
        -Wextra
        -Werror
        -pedantic
        $<$<CONFIG:Debug>:-g3>
        $<$<CONFIG:Debug>:-O0>
)
