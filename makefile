#=======================================================================
# Basic C++: Vectors and matrices as used in linear algebra 
#-----------------------------------------------------------------------
# Jean-Paul Rigault --- Copyright 2004
#=======================================================================

include default.mk

#-------------------------------------------------

INITIAL_FILES = demonstrator.cpp
ALL = demonstrator

# targets

demonstrator : demonstrator.o Position.o Plot.o Object.o Robot.o State.o FigeState.o VideFacePlotState.o VideState.o ChargeState.o ChargeFacePlotState.o
	$(CXX_LINK) -o demonstrator demonstrator.o Position.o Plot.o Object.o Robot.o State.o FigeState.o VideFacePlotState.o VideState.o ChargeState.o ChargeFacePlotState.o

dox : $(wildcard *.h *.cpp)
	doxygen 
	date > dox

extra_all : 
extra_clean :

#-----------------------------------------------------------------------
# Local dependencies
#-----------------------------------------------------------------------
Position.o: Position.h
Plot.o: Plot.h
Object.o: Object.h
Robot.o: Robot.h Object.h Plot.h Position.h
demonstrator.o: Robot.h Object.h Plot.h Position.h
VideFacePlotState.o: VideFacePlotState.h State.h
VideState.o: VideState.h State.h
ChargeState.o: ChargeState.h State.h
ChargeFacePlotState.o: ChargeFacePlotState.h Plot.h State.h
FigeState.o: FigeState.h State.h
State.o: State.h
