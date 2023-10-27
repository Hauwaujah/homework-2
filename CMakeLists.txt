cmake_minimum_required(VERSION 3.24)
project(homework_2)

set(CMAKE_CXX_STANDARD 14)

add_executable(homework_2 main.cpp "divide matrix.cpp" "divide matrix.cpp" matrixJob.cpp "multiply matrix by a number.cpp" "transpose matrix.cpp" transpose.h)
add_executable(matrixJob.cpp "divide matrix.cpp" matrixJob.cpp "multiply matrix by a number.cpp" "transpose matrix.cpp")

