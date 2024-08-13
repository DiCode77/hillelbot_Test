set(CMAKE_TOOLCHAIN_FILE ${CMAKE_SOURCE_DIR}/vcpkg/scripts/buildsystems/vcpkg.cmake CACHE STRING "Vcpkg toolchain file")


cmake_minimum_required(VERSION 3.30.2)
project(hillelbot_Test)

set(SRC "${CMAKE_SOURCE_DIR}/src")

#message("HELLO SRC DIR IS ${SRC}")
include_directories(${SRC})

add_executable(${PROJECT_NAME} ${SRC}/main.cpp)
set_target_properties(${PROJECT_NAME} PROPERTIES CXX_STANDARD 20 
                                                CXX_STANDARD_REQUIRED ON)

find_package(cpr CONFIG REQUIRED)
#target_link_libraries(${PROJECT_NAME} PRIVATE cpr::cpr)

find_package(nlohmann_json CONFIG REQUIRED)
#target_link_libraries(${PROJECT_NAME} PRIVATE nlohmann_json::nlohmann_json)

find_package(fmt CONFIG REQUIRED)

target_link_libraries(${PROJECT_NAME} PRIVATE cpr::cpr nlohmann_json::nlohmann_json fmt::fmt)
