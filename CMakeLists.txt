

cmake_minimum_required(VERSION 3.30.2)
project(hillelbot_Test)

set(SRC "${CMAKE_SOURCE_DIR}/src")

#message("HELLO SRC DIR IS ${SRC}")
include_directories(${SRC})

add_executable(${PROJECT_NAME} ${SRC}/main.cpp)
set_target_properties(${PROJECT_NAME} PROPERTIES CXX_STANDARD 20 
                                                CXX_STANDARD_REQUIRED ON)


#target_link_libraries(${PROJECT_NAME} PRIVATE cpr::cpr nlohman_json::nlohman_json)
