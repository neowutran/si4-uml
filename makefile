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

demonstrator : demonstrator.o Position.o Plot.o Object.o Robot.o FigeState.o EnRouteState.o AVideFacePlotState.o AVideState.o EnChargeState.o EnChargeFacePlotState.o 
	$(CXX_LINK) -o demonstrator demonstrator.o Position.o Plot.o Object.o Robot.o FigeState.o EnRouteState.o AVideFacePlotState.o AVideState.o EnChargeState.o EnChargeFacePlotState.o 

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
Obejct.o: Object.h
Robot.o: Robot.h Object.h Plot.h Position.h
demonstrator.o: Robot.h Object.h Plot.h Position.h
EnRouteState.o: EnRouteState.h
AVideFacePlotState.o: AVideFacePlotState.h
AVideState.o: AVideState.h
EnChargeState.o: EnChargeState.h
EnChargeFacePlotState.o: EnChargeFacePlotState.h Plot.h
FigeState.o: FigeState.h 
