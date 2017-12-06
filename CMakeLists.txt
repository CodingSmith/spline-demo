cmake_minimum_required(VERSION 2.8)
project(spline_demo)

add_executable(spline_demo ./main.cpp)
#target_link_libraries(fixed_vector )
install(TARGETS spline_demo
      DESTINATION ${PROJECT_SOURCE_DIR}/bin)

