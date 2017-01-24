Compiler = mpic++

Maindep = initialise.o initialisemoments.o neibour.o computeCoordinates.o \
 construct.o readinput.o Equiliberiumg.o Equiliberiumh.o writemoments.o	algorithm.o	computemoments.o \
 writevelocity.o destruct.o  propcolh.o propcolg.o  initialisesurf.o  \
 diffCD.o   diffBD.o centralforce.o   setwallnodes.o  computeenergy.o propset.o \
  exchangedencol.o  writeinfofile.o writeenergy.o computesurfarea.o writeinput.o writesurface.o


DEBUG = #-g

main : $(Maindep) ../functions/main.cpp
	$(Compiler) $(Maindep) $(DEBUG) -o WetM ../functions/main.cpp
	
initialise.o : ../functions/initialise.cpp ../functions/wet.h
	$(Compiler) $(DEBUG)	-c ../functions/initialise.cpp
	
initialisemoments.o : ../functions/initialisemoments.cpp ../functions/wet.h
	$(Compiler) $(DEBUG)	-c ../functions/initialisemoments.cpp 
	
neibour.o : ../functions/neibour.cpp ../functions/wet.h
	$(Compiler) $(DEBUG)	-c ../functions/neibour.cpp
	
computeCoordinates.o : ../functions/computeCoordinates.cpp ../functions/wet.h
	$(Compiler) $(DEBUG)	-c ../functions/computeCoordinates.cpp
	
computemoments.o : ../functions/computemoments.cpp ../functions/wet.h
	$(Compiler) $(DEBUG)	-c ../functions/computemoments.cpp		

construct.o : ../functions/construct.cpp ../functions/wet.h
	$(Compiler) $(DEBUG)	-c ../functions/construct.cpp
	
readinput.o : ../functions/readinput.cpp ../functions/wet.h
	$(Compiler) $(DEBUG)	-c ../functions/readinput.cpp	
	
Equiliberiumg.o : ../functions/Equiliberiumg.cpp ../functions/wet.h
	$(Compiler) $(DEBUG)	-c ../functions/Equiliberiumg.cpp	
	
Equiliberiumh.o : ../functions/Equiliberiumh.cpp ../functions/wet.h
	$(Compiler) $(DEBUG)	-c ../functions/Equiliberiumh.cpp		
	

	
writemoments.o : ../functions/writemoments.cpp ../functions/wet.h
	$(Compiler) $(DEBUG)	-c ../functions/writemoments.cpp

algorithm.o : ../functions/algorithm.cpp ../functions/wet.h
	$(Compiler) $(DEBUG)	-c ../functions/algorithm.cpp
	
writevelocity.o : ../functions/writevelocity.cpp ../functions/wet.h
	$(Compiler) $(DEBUG)	-c ../functions/writevelocity.cpp
	
destruct.o : ../functions/destruct.cpp ../functions/wet.h
	$(Compiler) $(DEBUG)	-c ../functions/destruct.cpp
	


	
	
propcolh.o : ../functions/propcolh.cpp ../functions/wet.h
	$(Compiler) $(DEBUG)	-c ../functions/propcolh.cpp
	
propcolg.o : ../functions/propcolg.cpp ../functions/wet.h
	$(Compiler) $(DEBUG)	-c ../functions/propcolg.cpp
	

	
initialisesurf.o : ../functions/initialisesurf.cpp ../functions/wet.h
	$(Compiler) $(DEBUG)	-c ../functions/initialisesurf.cpp		
	
		
computefreeenergy.o : ../functions/computefreeenergy.cpp ../functions/wet.h
	$(Compiler) $(DEBUG)	-c ../functions/computefreeenergy.cpp		

diffCD.o : ../functions/diffCD.cpp ../functions/wet.h
	$(Compiler) $(DEBUG)	-c ../functions/diffCD.cpp	
		
diffBD.o : ../functions/diffBD.cpp ../functions/wet.h
	$(Compiler) $(DEBUG)	-c ../functions/diffBD.cpp	

centralforce.o : ../functions/centralforce.cpp ../functions/wet.h
	$(Compiler) $(DEBUG)	-c ../functions/centralforce.cpp	
	
	
setwallnodes.o : ../functions/setwallnodes.cpp ../functions/wet.h
	$(Compiler) $(DEBUG)	-c ../functions/setwallnodes.cpp
	
momentsbound.o : ../functions/momentsbound.cpp ../functions/wet.h
	$(Compiler) $(DEBUG)	-c ../functions/momentsbound.cpp
	
computeenergy.o : ../functions/computeenergy.cpp ../functions/wet.h
	$(Compiler) $(DEBUG)	-c ../functions/computeenergy.cpp
	
propset.o : ../functions/propset.cpp ../functions/wet.h
	$(Compiler) $(DEBUG)	-c ../functions/propset.cpp		
	

	


	

exchangedencol.o : ../functions/exchangedencol.cpp ../functions/wet.h
	$(Compiler) $(DEBUG)	-c ../functions/exchangedencol.cpp	
	

	
writeinfofile.o : ../functions/writeinfofile.cpp ../functions/wet.h
	$(Compiler) $(DEBUG)	-c ../functions/writeinfofile.cpp
	
writeenergy.o : ../functions/writeenergy.cpp ../functions/wet.h
	$(Compiler) $(DEBUG)	-c ../functions/writeenergy.cpp




computesurfarea.o : ../functions/computesurfarea.cpp ../functions/wet.h
	$(Compiler) $(DEBUG)    -c ../functions/computesurfarea.cpp


writeinput.o : ../functions/writeinput.cpp ../functions/wet.h
	$(Compiler) $(DEBUG)    -c ../functions/writeinput.cpp

writesurface.o : ../functions/writesurface.cpp ../functions/wet.h
	$(Compiler) $(DEBUG)    -c ../functions/writesurface.cpp

clean :
	\rm *.o WetM	