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

demonstrator : demonstrator.o Position.o Plot.o Object.o Robot.o State.o FigeState.o AVideFacePlotState.o AVideState.o EnChargeState.o EnChargeFacePlotState.o 
	$(CXX_LINK) -o demonstrator demonstrator.o Position.o Plot.o Object.o Robot.o State.o FigeState.o AVideFacePlotState.o AVideState.o EnChargeState.o EnChargeFacePlotState.o 

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
AVideFacePlotState.o: AVideFacePlotState.h State.h
AVideState.o: AVideState.h State.h
EnChargeState.o: EnChargeState.h State.h
EnChargeFacePlotState.o: EnChargeFacePlotState.h Plot.h State.h
FigeState.o: FigeState.h State.h
State.o: State.h
