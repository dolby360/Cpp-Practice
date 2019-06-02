cmake_minimum_required(VERSION 3.0)
set(CMAKE_CXX_FLAGS "-std=c++17")
project(CppPractice)
include_directories(include)


add_executable(
	CppPractice
	test-main.cpp
	test.cpp
)