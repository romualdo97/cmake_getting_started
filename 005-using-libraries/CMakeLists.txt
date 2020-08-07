cmake_minimum_required(VERSION 3.7.2)

project(my_project_name)

# For the shared library:
set(PROJECT_LINK_LIBS libHelloSharedObject.so)
link_directories(~/gamebite10/learning-cmake/003-shared-library/build)

# For the static library:
# set(PROJECT_LINK_LIBS libMyFirstStaticLibrary.a)
# link_directories(~/gamebite10/learning-cmake/004-static-library/build)

include_directories(~/gamebite10/learning-cmake/003-shared-library/include)

file(GLOB SOURCE "src/*.cpp")

add_executable(usingLibs ${SOURCE})
target_link_libraries(usingLibs ${PROJECT_LINK_LIBS})

# https://stackoverflow.com/questions/26787628/how-do-i-specify-relative-paths-in-cmake/26787695

