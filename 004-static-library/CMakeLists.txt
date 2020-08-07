cmake_minimum_required(VERSION 3.7.2)

project(my_project)

include_directories(include)

file(GLOB SOURCE "src/*.cpp")

add_library(MyFirstStaticLibrary STATIC ${SOURCE})

# Set the location for library installation -- i.e., /usr/lib in this case
# not really necessary in this example. Use "sudo make install" to apply
install(TARGETS MyFirstStaticLibrary DESTINATION /usr/lib)