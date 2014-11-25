cmake_minimum_required(VERSION 2.8.4)

project(uml)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    demonstrator.cpp
    VideState.cpp
    VideFacePlotState.cpp
    Robot.cpp
    ChargeFacePlotState.cpp
    ChargeState.cpp
    FigeState.cpp
    Object.cpp
    Position.cpp
    Plot.cpp
    State.cpp
    )

add_executable(uml ${SOURCE_FILES})