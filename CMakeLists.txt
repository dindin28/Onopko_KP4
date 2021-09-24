cmake_minimum_required(VERSION 3.10)

project(KP4)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

#========================
#PVS-Studio option
#========================
option(ANALYZE "Analyze code with PVS-Studio" OFF)

#========================
#Sources
#========================
file(GLOB srcs "src/*.cpp")

#========================
#Building executable
#========================
add_executable(${PROJECT_NAME} ${srcs})

if(ANALYZE)
  include(PVS-Studio.cmake)
  pvs_studio_add_target(TARGET example1.analyze ALL
                        OUTPUT FORMAT errorfile
                        ANALYZE ${PROJECT_NAME}
                        MODE GA:1,2
                        LOG target.err)
endif()