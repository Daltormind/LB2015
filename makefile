Compiler = mpic++

Maindep = initialise.o initialisemoments.o neibour.o computeCoordinates.o \
 construct.o readinput.o Equiliberiumg.o Equiliberiumh.o writemoments.o	algorithm.o	computemoments.o \
 writevelocity.o destruct.o  propcolh.o propcolg.o  initialisesurf.o relabel.o  \
 diffCD.o   diffBD.o centralforce.o   setwallnodes.o  computeenergy.o propset.o \
 exchangeC.o exchangemu.o exchangerho.o exchangevel.o exchangemask.o exchangep.o exchangedencol.o  writeinfofile.o writeenergy.o computesurfarea.o writeinput.o writesurface.o


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
	


diffMD.o : ../functions/diffMD.cpp ../functions/wet.h
	$(Compiler) $(DEBUG)	-c ../functions/diffMD.cpp	
	
propcolh.o : ../functions/propcolh.cpp ../functions/wet.h
	$(Compiler) $(DEBUG)	-c ../functions/propcolh.cpp
	
propcolg.o : ../functions/propcolg.cpp ../functions/wet.h
	$(Compiler) $(DEBUG)	-c ../functions/propcolg.cpp
	
mach.o : ../functions/mach.cpp ../functions/wet.h
	$(Compiler) $(DEBUG)	-c ../functions/mach.cpp	
	
initialisesurf.o : ../functions/initialisesurf.cpp ../functions/wet.h
	$(Compiler) $(DEBUG)	-c ../functions/initialisesurf.cpp		
	
relabel.o : ../functions/relabel.cpp ../functions/wet.h
	$(Compiler) $(DEBUG)	-c ../functions/relabel.cpp		
	
computefreeenergy.o : ../functions/computefreeenergy.cpp ../functions/wet.h
	$(Compiler) $(DEBUG)	-c ../functions/computefreeenergy.cpp		

diffCD.o : ../functions/diffCD.cpp ../functions/wet.h
	$(Compiler) $(DEBUG)	-c ../functions/diffCD.cpp	
	
diffMDt.o : ../functions/diffMDt.cpp ../functions/wet.h
	$(Compiler) $(DEBUG)	-c ../functions/diffMDt.cpp	
	
diffMDgamma.o : ../functions/diffMDgamma.cpp ../functions/wet.h
	$(Compiler) $(DEBUG)	-c ../functions/diffMDgamma.cpp	

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
	
exchangeC.o : ../functions/exchangeC.cpp ../functions/wet.h
	$(Compiler) $(DEBUG)	-c ../functions/exchangeC.cpp
	
exchangerho.o : ../functions/exchangerho.cpp ../functions/wet.h
	$(Compiler) $(DEBUG)	-c ../functions/exchangerho.cpp		
	
exchangemu.o : ../functions/exchangemu.cpp ../functions/wet.h
	$(Compiler) $(DEBUG)	-c ../functions/exchangemu.cpp	
	
exchangep.o : ../functions/exchangep.cpp ../functions/wet.h
	$(Compiler) $(DEBUG)	-c ../functions/exchangep.cpp	
	
#genCglobal.o : ../functions/genCglobal.cpp ../functions/wet.h
#	$(Compiler) $(DEBUG)	-c ../functions/genCglobal.cpp	
	
exchangemask.o : ../functions/exchangemask.cpp ../functions/wet.h
	$(Compiler) $(DEBUG)	-c ../functions/exchangemask.cpp
	
exchangevel.o : ../functions/exchangevel.cpp ../functions/wet.h
	$(Compiler) $(DEBUG)	-c ../functions/exchangevel.cpp	

#generateglobalmask.o : ../functions/generateglobalmask.cpp ../functions/wet.h
#	$(Compiler) $(DEBUG)	-c ../functions/generateglobalmask.cpp	

	

exchangedencol.o : ../functions/exchangedencol.cpp ../functions/wet.h
	$(Compiler) $(DEBUG)	-c ../functions/exchangedencol.cpp	
	
#genmuglobal.o : ../functions/genmuglobal.cpp ../functions/wet.h
#	$(Compiler) $(DEBUG)	-c ../functions/genmuglobal.cpp		
	
#genpglobal.o : ../functions/genpglobal.cpp ../functions/wet.h
#	$(Compiler) $(DEBUG)	-c ../functions/genpglobal.cpp	
	
#genuxglobal.o : ../functions/genuxglobal.cpp ../functions/wet.h
#	$(Compiler) $(DEBUG)	-c ../functions/genuxglobal.cpp
	
#genuyglobal.o : ../functions/genuyglobal.cpp ../functions/wet.h
#	$(Compiler) $(DEBUG)	-c ../functions/genuyglobal.cpp

#genuzglobal.o : ../functions/genuzglobal.cpp ../functions/wet.h
#	$(Compiler) $(DEBUG)	-c ../functions/genuzglobal.cpp
	
writeinfofile.o : ../functions/writeinfofile.cpp ../functions/wet.h
	$(Compiler) $(DEBUG)	-c ../functions/writeinfofile.cpp
	
writeenergy.o : ../functions/writeenergy.cpp ../functions/wet.h
	$(Compiler) $(DEBUG)	-c ../functions/writeenergy.cpp

#dis.o : ../functions/dis.cpp ../functions/wet.h
#	$(Compiler) $(DEBUG)    -c ../functions/dis.cpp

#writedis.o : ../functions/writedis.cpp ../functions/wet.h
#	$(Compiler) $(DEBUG)    -c ../functions/writedis.cpp

#gendisvGlobal.o : ../functions/gendisvGlobal.cpp ../functions/wet.h
#	$(Compiler) $(DEBUG)    -c ../functions/gendisvGlobal.cpp

#gendisdGlobal.o : ../functions/gendisdGlobal.cpp ../functions/wet.h
#	$(Compiler) $(DEBUG)    -c ../functions/gendisdGlobal.cpp


#writedisin.o : ../functions/writedisin.cpp ../functions/wet.h
#	$(Compiler) $(DEBUG)    -c ../functions/writedisin.cpp


computesurfarea.o : ../functions/computesurfarea.cpp ../functions/wet.h
	$(Compiler) $(DEBUG)    -c ../functions/computesurfarea.cpp


writeinput.o : ../functions/writeinput.cpp ../functions/wet.h
	$(Compiler) $(DEBUG)    -c ../functions/writeinput.cpp

writesurface.o : ../functions/writesurface.cpp ../functions/wet.h
	$(Compiler) $(DEBUG)    -c ../functions/writesurface.cpp

clean :
	\rm *.o WetM	