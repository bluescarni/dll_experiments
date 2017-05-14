cmake_minimum_required(VERSION 3.2.0)
project(sample_project CXX C)

add_library(snopt SHARED snopt.c)

find_package(Boost 1.60.0 COMPONENTS system filesystem)
add_executable(main main.cpp)
target_link_libraries(main Boost::system Boost::filesystem ${CMAKE_DL_LIBS})
