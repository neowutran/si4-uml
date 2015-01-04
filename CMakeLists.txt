cmake_minimum_required(VERSION 2.8.4)
project(si4_uml)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    AfficheurRobot.h
    ChargeFacePlotState.cpp
    ChargeFacePlotState.h
    ChargeState.cpp
    ChargeState.h
    CommandeAvancer.h
    CommandeEvaluerObstacle.h
    CommandeFiger.h
    CommandePeserObject.h
    CommandePoser.h
    CommandeRencontrerObject.h
    CommandeRepartir.h
    CommandeRobot.h
    CommandeSaisir.h
    CommandeTourner.h
    demonstrator.cpp
    EnRouteState.cpp
    EnRouteState.h
    FigeState.cpp
    FigeState.h
    Invocator.h
    IObservable.h
    IObserver.h
    Object.cpp
    Object.h
    Plot.cpp
    Plot.h
    Position.cpp
    Position.h
    Robot.cpp
    Robot.h
    State.cpp
    State.h
    VideFacePlotState.cpp
    VideFacePlotState.h
    VideState.cpp
    VideState.h)

add_executable(si4_uml ${SOURCE_FILES})