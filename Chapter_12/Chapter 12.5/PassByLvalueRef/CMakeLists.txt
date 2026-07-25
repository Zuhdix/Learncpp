cmake_minimum_required(VERSION 3.10)
project(CMakeTarget CXX)

# --- STANDARD C++20 RULES ---
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Hapus flag /W3 bawaan CMake untuk MSVC agar tidak bentrok dengan /W4
if(MSVC)
    string(REGEX REPLACE "/W[0-4]" "" CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")
endif()

# --- EXECUTABLE TARGET ---
# HANYA masukkan file yang sedang kamu kerjakan saat ini.
# Jika ingin ganti latihan, ganti nama file di bawah ini.
add_executable(CMakeTarget
     # "PassByLvalueRef.cpp" "example1.cpp" "valArg.cpp"
     "test.cpp")

# --- COMPILER FLAGS (THE ARMOR) ---
if(MSVC)
    # 1. FLAGS UNTUK VISUAL STUDIO
    target_compile_options(CMakeTarget PRIVATE 
        /W4 /WX /permissive- /analyze
        /w44365 /w44062
    )
    
    # 2. MSVC Address Sanitizer + Debug Info (/Zi)
    if(CMAKE_BUILD_TYPE STREQUAL "Debug" OR CMAKE_BUILD_TYPE STREQUAL "")
        target_compile_options(CMakeTarget PRIVATE /fsanitize=address /Zi)
    endif()

else()
    # FLAGS UNTUK GCC / CLANG
    target_compile_options(CMakeTarget PRIVATE 
        -Wall -Wextra -Wpedantic -Werror 
        -Wconversion -Wsign-conversion -Wshadow -Wunused
        -Wnon-virtual-dtor   
        -Wold-style-cast     
        -Wcast-align         
        -Woverloaded-virtual 
    )

    # SANITIZERS GCC/Clang 
    if(CMAKE_BUILD_TYPE STREQUAL "Debug" OR CMAKE_BUILD_TYPE STREQUAL "")
        target_compile_options(CMakeTarget PRIVATE 
            -fsanitize=address,undefined 
            -fno-omit-frame-pointer
        )
        target_link_options(CMakeTarget PRIVATE 
            -fsanitize=address,undefined
        )
    endif()
endif()