cmake_minimum_required(VERSION 3.30.2)
project(hillelbot_Test)

set(SRC "${CMAKE_SOURCE_DIR}/src")

#message("HELLO SRC DIR IS ${SRC}")
include_directories(${SRC})

add_executable(${PROJECT_NAME} ${SRC}/main.cpp)
set_target_properties(${PROJECT_NAME} PROPERTIES CXX_STANDARD 20 
                                                CXX_STANDARD_REQUIRED ON)

