cmake_minimum_required(VERSION 3.7.2)

project(directory_test)

set(CMAKE_BUILD_TYPE Release)

include_directories(include)

file(GLOB SOURCES "src/*.cpp")

#Generate the shared library from the sources
add_library(HelloSharedObject SHARED ${SOURCES})

#Set the location for library installation -- i.e., /usr/lib in this case
# not really necessary in this example. Use "sudo make install" to apply
install(TARGETS HelloSharedObject DESTINATION /usr/lib)