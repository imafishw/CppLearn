cmake_minimum_required(VERSION 3.10)

project(Lab2_Cmake_Architecture)

aux_source_directory(./src DIR_SRCS)

include_directories(include)

add_executable(testdemo ${DIR_SRCS})