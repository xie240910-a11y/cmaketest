cmake_minimum_required(VERSION 3.15)
# https://subingwen.cn/cmake/CMake-primer

# 定义项目
project(test)

file(GLOB SRC ${PROJECT_SOURCE_DIR}/*.cc)
add_definitions(-DDEBUG)

add_executable(app ${SRC})

