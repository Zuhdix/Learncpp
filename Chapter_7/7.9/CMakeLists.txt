cmake_minimum_required(VERSION 3.10)
project(CMakeTarget CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF) #

add_executable(CMakeTarget "Inline_Functions.cpp" "math.cpp" "pi.h") # ini yang diganti

if(MSVC)
    # --- FLAGS UNTUK VISUAL STUDIO ---
    target_compile_options(CMakeTarget PRIVATE 
        /W4 /WX /permissive- /analyze
        /w44365 /w44062
    )
    target_compile_options(CMakeTarget PRIVATE /external:W3) 
else()
    # --- FLAGS UNTUK GCC / CLANG (Armor Lengkap) ---
    target_compile_options(CMakeTarget PRIVATE 
        -Wall -Wextra -Wpedantic -Werror 
        -Wconversion -Wsign-conversion -Wshadow -Wunused
        -Wnon-virtual-dtor   # Cek Destructor di Inheritance
        -Wold-style-cast     # Larang C-style cast (int)x
        -Wcast-align         # Cek alignment memori saat casting
        -Woverloaded-virtual # Cek jika fungsi virtual tersembunyi
    )
endif()
