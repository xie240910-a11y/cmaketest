cmake_minimum_required(VERSION 3.15)
# https://subingwen.cn/cmake/CMake-primer

# 定义项目
project(test)

file(GLOB SRC ${PROJECT_SOURCE_DIR}/src/*.cc)

# 指定头文件路径
include_directories(${PROJECT_SOURCE_DIR}/include)

# 指定静态库跟动态库的文件
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

# 拼接字符串
set(tmp hello world)
set(tmp1 ${tmp} ${SRC})
message(${tmp})
message("\n")
message(${tmp1})
message("\n")

# list APPEND添加
list(APPEND tmp "xxx1" "sss2" ${SRC})
message(${tmp})
message("\n")

# list REMOVE_ITEM添加
list(REMOVE_ITEM SRC ${CMAKE_CURRENT_SOURCE_DIR}/src/main.cc)
message(${SRC})
