cmake_minimum_required(VERSION 3.15)
# https://subingwen.cn/cmake/CMake-primer

# 定义项目
project(test)

file(GLOB SRC ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cc)

# 指定头文件路径
include_directories(${PROJECT_SOURCE_DIR}/include)

# 指定静态库跟动态库的文件
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

# 生成静态库
# add_library(calc STATIC ${SRC})

# 生成动态库
add_library(calc SHARED ${SRC})