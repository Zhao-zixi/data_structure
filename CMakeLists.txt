cmake_minimum_required(VERSION 3.10)   # 最低 CMake 版本
project(DataStructure C)                  # 项目名 + 指定语言为C

# 设置 C 标准为 C11 (可改为 C99 或 C17)
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

# 设置输出目录 (可选)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
add_subdirectory(Session_1_Linear_List)

# 添加源代码
add_executable(DataStructure main.c)

target_link_libraries(DataStructure PRIVATE Session1LinearList)

target_include_directories(DataStructure PRIVATE ${CMAKE_SOURCE_DIR}/Session_1_Linear_List)

