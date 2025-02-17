// PositionTrackerDll.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "PositionTracker.h"


int main(int argc, char *argv[])
{
	double position = atof(argv[1]);
	double initial_position = atof(argv[2]);
	char *file = argv[3];
	int delay = atoi(argv[4]);

	PositionTracker(position, initial_position, file, delay);

	return 0;
}