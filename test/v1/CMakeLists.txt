cmake_minimum_required(VERSION 3.15)
#https://subingwen.cn/cmake/CMake-primer
# 定义项目
project(test 
    VERSION 1.0.0         # 定义项目版本
    LANGUAGES C CXX       # 指定语言
    DESCRIPTION "A simple calculator project"
)

# 打印内置变量
message(STATUS "PROJECT_NAME = ${PROJECT_NAME}")
message(STATUS "CMAKE_PROJECT_NAME = ${CMAKE_PROJECT_NAME}")
message(STATUS "PROJECT_SOURCE_DIR = ${PROJECT_SOURCE_DIR}")
message(STATUS "PROJECT_BINARY_DIR = ${PROJECT_BINARY_DIR}")
message(STATUS "PROJECT_VERSION = ${PROJECT_VERSION}")

# 生成可执行文件
# set(SRC_LIST  add.cc main.cc sub.cc)

# 设置c++版本
set(CMAKE_CXX_STANDARD 11)

# 搜索所有的源文件 
# aux_source_directory(${PROJECT_SOURCE_DIR} SRC)

# 指定头文件路径
include_directories(${PROJECT_SOURCE_DIR}/include)

file(GLOB SRC ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cc)
# file(GLOB SRC ${CMAKE_CURRENT_SOURCE_DIR}/*.cc)

#  设置二进制文件生成位置
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
# set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

#生成二进制文件
add_executable(app ${SRC})
