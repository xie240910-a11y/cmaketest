cmake_minimum_required(VERSION 3.15)
#https://subingwen.cn/cmake/CMake-primer

# 定义项目
project(test)

file(GLOB SRC ${CMAKE_CURRENT_SOURCE_DIR}/*.cc)

# 指定头文件路径
include_directories(${PROJECT_SOURCE_DIR}/include)

# 链接静态库
# 如果是系统提供直接提供名字,如果不是需要指定路径
# link_libraries(calc)
# link_directories(${PROJECT_SOURCE_DIR}/lib1)

# 链接动态库
link_directories(${PROJECT_SOURCE_DIR}/lib2)

add_executable(app ${SRC})

target_link_libraries(app calc)

