#include "wet.h"

void wet::exchangedencol(void)
{

	
	//if(t%infoStep==0)
	//	cout << "Process " << rank << ": exchanging densities...." << endl;
	
	MPI_Status statushc1, statushc2, statushc7, statushc8, statushc9, statushc10, statushc15, statushc16, statushc17, statushc18, statusgc1, statusgc2, statusgc7, statusgc8, statusgc9, statusgc10, statusgc15, statusgc16, statusgc17, statusgc18; 

	MPI_Request requestOuthc1, requestOuthc2, requestInhc1, requestInhc2, requestOuthc7, requestOuthc8, requestInhc7, requestInhc8, requestOuthc9, requestOuthc10, requestInhc9, requestInhc10, requestOuthc15, requestOuthc16, requestInhc15, requestInhc16, requestOuthc17, requestOuthc18, requestInhc17, requestInhc18,requestOutgc1, requestOutgc2, requestIngc1, requestIngc2, requestOutgc7, requestOutgc8, requestIngc7, requestIngc8, requestOutgc9, requestOutgc10, requestIngc9, requestIngc10, requestOutgc15, requestOutgc16, requestIngc15, requestIngc16, requestOutgc17, requestOutgc18, requestIngc17, requestIngc18;

	
	//SENDING FF DENSITIES

	//Sending right (for sender) hc1 (only right part, because hc1 moves in x direction)
	MPI_Isend(&(hc1[k2-k1]),k1, MPI_DOUBLE, rightProcess, rank*100 , MPI_COMM_WORLD, &requestOuthc1);
	
	//Sending left (for sender) hc2 (only left part, because hc2 moves in -x direction)
	MPI_Isend(&(hc2[k1]),k1, MPI_DOUBLE, leftProcess, rank*100+1 , MPI_COMM_WORLD, &requestOuthc2);

	//Sending right (for sender) hc7 (only right part, because hc7 moves in x direction)
	MPI_Isend(&(hc7[k2-k1]),k1, MPI_DOUBLE, rightProcess, rank*100+2 , MPI_COMM_WORLD, &requestOuthc7);
	
	//Sending left (for sender) hc8 (only left part, because hc8 moves in -x direction)
	MPI_Isend(&(hc8[k1]),k1, MPI_DOUBLE, leftProcess, rank*100+3 , MPI_COMM_WORLD, &requestOuthc8);

	//Sending right (for sender) hc9 (only right part, because hc9 moves in x direction)
	MPI_Isend(&(hc9[k2-k1]),k1, MPI_DOUBLE, rightProcess, rank*100+4 , MPI_COMM_WORLD, &requestOuthc9);
	
	//Sending left (for sender) hc10 (only left part, because hc10 moves in -x direction)
	MPI_Isend(&(hc10[k1]),k1, MPI_DOUBLE, leftProcess, rank*100+5 , MPI_COMM_WORLD, &requestOuthc10);

	//Sending right (for sender) hc15 (only right part, because hc15 moves in x direction)
	MPI_Isend(&(hc15[k2-k1]),k1, MPI_DOUBLE, rightProcess, rank*100+6 , MPI_COMM_WORLD, &requestOuthc15);
	
	//Sending left (for sender) hc16 (only left part, because hc16 moves in -x direction)
	MPI_Isend(&(hc16[k1]),k1, MPI_DOUBLE, leftProcess, rank*100+7 , MPI_COMM_WORLD, &requestOuthc16);

	//Sending right (for sender) hc17 (only right part, because hc17 moves in x direction)
	MPI_Isend(&(hc17[k2-k1]),k1, MPI_DOUBLE, rightProcess, rank*100+8 , MPI_COMM_WORLD, &requestOuthc17);
	
	//Sending left (for sender) hc18 (only left part, because hc18 moves in -x direction)
	MPI_Isend(&(hc18[k1]),k1, MPI_DOUBLE, leftProcess, rank*100+9 , MPI_COMM_WORLD, &requestOuthc18);

		
	//RECIEVING FF DENSITIES

	//Recieving left (for reciever) hc1 (only left part, because hc1 moves in x direction)
	MPI_Irecv(hc1, k1, MPI_DOUBLE, leftProcess, leftProcess*100, MPI_COMM_WORLD, &requestInhc1);

	//Recieving right (for reciever) hc2 (only right part, because hc2 moves in -x direction)
	MPI_Irecv(&(hc2[k2]), k1, MPI_DOUBLE, rightProcess, rightProcess*100+1, MPI_COMM_WORLD, &requestInhc2);
	
	//Recieving left (for reciever) hc7 (only left part, because hc7 moves in x direction)
	MPI_Irecv(hc7, k1, MPI_DOUBLE, leftProcess, leftProcess*100+2, MPI_COMM_WORLD, &requestInhc7);
	
	//Recieving right (for reciever) hc8 (only right part, because hc8 moves in -x direction)
	MPI_Irecv(&(hc8[k2]), k1, MPI_DOUBLE, rightProcess, rightProcess*100+3, MPI_COMM_WORLD, &requestInhc8);

	//Recieving left (for reciever) hc1 (only left part, because hc9 moves in x direction)
	MPI_Irecv(hc9, k1, MPI_DOUBLE, leftProcess, leftProcess*100+4, MPI_COMM_WORLD, &requestInhc9);

	//Recieving right (for reciever) hc2 (only right part, because hc10 moves in -x direction)
	MPI_Irecv(&(hc10[k2]), k1, MPI_DOUBLE, rightProcess, rightProcess*100+5, MPI_COMM_WORLD, &requestInhc10);
	
	//Recieving left (for reciever) hc7 (only left part, because hc15 moves in x direction)
	MPI_Irecv(hc15, k1, MPI_DOUBLE, leftProcess, leftProcess*100+6, MPI_COMM_WORLD, &requestInhc15);
	
	//Recieving right (for reciever) hc8 (only right part, because hc16 moves in -x direction)
	MPI_Irecv(&(hc16[k2]), k1, MPI_DOUBLE, rightProcess, rightProcess*100+7, MPI_COMM_WORLD, &requestInhc16);

	//Recieving left (for reciever) hc17 (only left part, because hc17 moves in x direction)
	MPI_Irecv(hc17, k1, MPI_DOUBLE, leftProcess, leftProcess*100+8, MPI_COMM_WORLD, &requestInhc17);
	
	//Recieving right (for reciever) hc18 (only right part, because hc18 moves in -x direction)
	MPI_Irecv(&(hc18[k2]), k1, MPI_DOUBLE, rightProcess, rightProcess*100+9, MPI_COMM_WORLD, &requestInhc18);

	
	//SENDING GG DENSITIES

	//Sending right (for sender) gc1 (only right part, because gc1 moves in x direction)
	MPI_Isend(&(gc1[k2-k1]),k1, MPI_DOUBLE, rightProcess, rank*100+10 , MPI_COMM_WORLD, &requestOutgc1);
	
	//Sending left (for sender) gc2 (only left part, because gc2 moves in -x direction)
	MPI_Isend(&(gc2[k1]),k1, MPI_DOUBLE, leftProcess, rank*100+11 , MPI_COMM_WORLD, &requestOutgc2);

	//Sending right (for sender) gc7 (only right part, because gc7 moves in x direction)
	MPI_Isend(&(gc7[k2-k1]),k1, MPI_DOUBLE, rightProcess, rank*100+12 , MPI_COMM_WORLD, &requestOutgc7);
	
	//Sending left (for sender) gc8 (only left part, because gc8 moves in -x direction)
	MPI_Isend(&(gc8[k1]),k1, MPI_DOUBLE, leftProcess, rank*100+13 , MPI_COMM_WORLD, &requestOutgc8);

	//Sending right (for sender) gc9 (only right part, because gc9 moves in x direction)
	MPI_Isend(&(gc9[k2-k1]),k1, MPI_DOUBLE, rightProcess, rank*100+14 , MPI_COMM_WORLD, &requestOutgc9);
	
	//Sending left (for sender) gc10 (only left part, because gc10 moves in -x direction)
	MPI_Isend(&(gc10[k1]),k1, MPI_DOUBLE, leftProcess, rank*100+15, MPI_COMM_WORLD, &requestOutgc10);

	//Sending right (for sender) gc15 (only right part, because gc15 moves in x direction)
	MPI_Isend(&(gc15[k2-k1]),k1, MPI_DOUBLE, rightProcess, rank*100+15 , MPI_COMM_WORLD, &requestOutgc15);
	
	//Sending left (for sender) gc16 (only left part, because gc16 moves in -x direction)
	MPI_Isend(&(gc16[k1]),k1, MPI_DOUBLE, leftProcess, rank*100+17 , MPI_COMM_WORLD, &requestOutgc16);

	//Sending right (for sender) gc17 (only right part, because gc17 moves in x direction)
	MPI_Isend(&(gc17[k2-k1]),k1, MPI_DOUBLE, rightProcess, rank*100+18 , MPI_COMM_WORLD, &requestOutgc17);
	
	//Sending left (for sender) gc18 (only left part, because gc18 moves in -x direction)
	MPI_Isend(&(gc18[k1]),k1, MPI_DOUBLE, leftProcess, rank*100+19 , MPI_COMM_WORLD, &requestOutgc18);

		
	//RECIEVING GG DENSITIES

	//Recieving left (for reciever) gc1 (only left part, because gc1 moves in x direction)
	MPI_Irecv(gc1, k1, MPI_DOUBLE, leftProcess, leftProcess*100+10, MPI_COMM_WORLD, &requestIngc1);

	//Recieving right (for reciever) gc2 (only right part, because gc2 moves in -x direction)
	MPI_Irecv(&(gc2[k2]), k1, MPI_DOUBLE, rightProcess, rightProcess*100+11, MPI_COMM_WORLD, &requestIngc2);
	
	//Recieving left (for reciever) gc7 (only left part, because gc7 moves in x direction)
	MPI_Irecv(gc7, k1, MPI_DOUBLE, leftProcess, leftProcess*100+12, MPI_COMM_WORLD, &requestIngc7);
	
	//Recieving right (for reciever) gc8 (only right part, because gc8 moves in -x direction)
	MPI_Irecv(&(gc8[k2]), k1, MPI_DOUBLE, rightProcess, rightProcess*100+13, MPI_COMM_WORLD, &requestIngc8);

	//Recieving left (for reciever) gc1 (only left part, because gc9 moves in x direction)
	MPI_Irecv(gc9, k1, MPI_DOUBLE, leftProcess, leftProcess*100+14, MPI_COMM_WORLD, &requestIngc9);

	//Recieving right (for reciever) gc2 (only right part, because gc10 moves in -x direction)
	MPI_Irecv(&(gc10[k2]), k1, MPI_DOUBLE, rightProcess, rightProcess*100+15, MPI_COMM_WORLD, &requestIngc10);
	
	//Recieving left (for reciever) gc7 (only left part, because gc15 moves in x direction)
	MPI_Irecv(gc15, k1, MPI_DOUBLE, leftProcess, leftProcess*100+15, MPI_COMM_WORLD, &requestIngc15);
	
	//Recieving right (for reciever) gc8 (only right part, because gc16 moves in -x direction)
	MPI_Irecv(&(gc16[k2]), k1, MPI_DOUBLE, rightProcess, rightProcess*100+17, MPI_COMM_WORLD, &requestIngc16);

	//Recieving left (for reciever) gc17 (only left part, because gc17 moves in x direction)
	MPI_Irecv(gc17, k1, MPI_DOUBLE, leftProcess, leftProcess*100+18, MPI_COMM_WORLD, &requestIngc17);
	
	//Recieving right (for reciever) gc18 (only right part, because gc18 moves in -x direction)
	MPI_Irecv(&(gc18[k2]), k1, MPI_DOUBLE, rightProcess, rightProcess*100+19, MPI_COMM_WORLD, &requestIngc18);

	
	
	//Waiting until fn(i) densities are saved in the recieving bufner
	MPI_Wait(&requestInhc1, &statushc1);
	MPI_Wait(&requestInhc2, &statushc2);
	MPI_Wait(&requestInhc7, &statushc7);
	MPI_Wait(&requestInhc8, &statushc8);
	MPI_Wait(&requestInhc9, &statushc9);
	MPI_Wait(&requestInhc10, &statushc10);
	MPI_Wait(&requestInhc15, &statushc15);
	MPI_Wait(&requestInhc16, &statushc16);
	MPI_Wait(&requestInhc17, &statushc17);
	MPI_Wait(&requestInhc18, &statushc18);

	//Waiting until gn(i) densities are saved in the recieving bufner
	MPI_Wait(&requestIngc1, &statusgc1);
	MPI_Wait(&requestIngc2, &statusgc2);
	MPI_Wait(&requestIngc7, &statusgc7);
	MPI_Wait(&requestIngc8, &statusgc8);
	MPI_Wait(&requestIngc9, &statusgc9);
	MPI_Wait(&requestIngc10, &statusgc10);
	MPI_Wait(&requestIngc15, &statusgc15);
	MPI_Wait(&requestIngc16, &statusgc16);
	MPI_Wait(&requestIngc17, &statusgc17);
	MPI_Wait(&requestIngc18, &statusgc18);

	//Waiting until fn(i) sending bufner is relased
	MPI_Wait(&requestOuthc1, &statushc1);
	MPI_Wait(&requestOuthc2, &statushc2);
	MPI_Wait(&requestOuthc7, &statushc7);
	MPI_Wait(&requestOuthc8, &statushc8);
	MPI_Wait(&requestOuthc9, &statushc9);
	MPI_Wait(&requestOuthc10, &statushc10);
	MPI_Wait(&requestOuthc15, &statushc15);
	MPI_Wait(&requestOuthc16, &statushc16);
	MPI_Wait(&requestOuthc17, &statushc17);
	MPI_Wait(&requestOuthc18, &statushc18);

	//Waiting until gn(i) sending bufner is relased
	MPI_Wait(&requestOutgc1, &statusgc1);
	MPI_Wait(&requestOutgc2, &statusgc2);
	MPI_Wait(&requestOutgc7, &statusgc7);
	MPI_Wait(&requestOutgc8, &statusgc8);
	MPI_Wait(&requestOutgc9, &statusgc9);
	MPI_Wait(&requestOutgc10, &statusgc10);
	MPI_Wait(&requestOutgc15, &statusgc15);
	MPI_Wait(&requestOutgc16, &statusgc16);
	MPI_Wait(&requestOutgc17, &statusgc17);
	MPI_Wait(&requestOutgc18, &statusgc18);

	MPI_Barrier(MPI_COMM_WORLD);

	//if(t%infoStep==0)
	//	cout << "Process " << rank << ": dendities exchanged." << endl;
}