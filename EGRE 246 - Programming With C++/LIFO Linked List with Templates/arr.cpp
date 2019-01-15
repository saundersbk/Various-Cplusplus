// File Name: arr.cpp
// Functionality: Implement functionality of arr class methods
// Brandon K. Saunders 
// Virginia Commonwealth University

#include "arr.h"

arr::arr()
{
	array[0] = 0;
	array[1] = 0;
	array[2] = 0;
}

arr::arr(int i, int j, int k)
{
	array[0] = i;
	array[1] = j;
	array[2] = k;
}

void arr::display(ostream& os)
{
	for(int i = 0; i< 3; i++)
	{
		os << "index "<<i<< " - "<< array[i]<<", ";
	}
	
}

ostream& operator<<(ostream& os, arr a)
{
	a.display(os);
	return os;
}