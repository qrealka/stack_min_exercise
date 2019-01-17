cmake_minimum_required (VERSION 3.8)

add_executable(stack_min_exercise stack_min_exercise.cpp StackWithMin.cpp)
set_property(TARGET stack_min_exercise PROPERTY CXX_STANDARD 11)
set_property(TARGET stack_min_exercise PROPERTY CXX_STANDARD_REQUIRED ON)