# define the minimum cmake version
cmake_minimum_required(VERSION 3.20)

# define the project name
project(demo_1 VERSION 1.0 LANGUAGES C CXX)

# define the c standard version
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED True)

# define the c++ standard version
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)


# add a library for your functions
add_library(uni_library STATIC
    src/developer.c
    src/developer_group.c
    src/group_logo.c)
# add the includes to the library
target_include_directories(uni_library PUBLIC include)

# add an executabel and assign files to it
add_executable(demo_1_main src/main.c)
# add the include directories
target_include_directories(demo_1_main PRIVATE include)
# link your library
target_link_libraries(demo_1_main PRIVATE uni_library)


