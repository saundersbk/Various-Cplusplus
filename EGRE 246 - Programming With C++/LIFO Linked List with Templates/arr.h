// File Name: arr.h
// Functionality: Declare the arr class
// Brandon K. Saunders 
// Virginia Commonwealth University

#ifndef ARR_H
#define ARR_H

#include <iostream>

using namespace std;

class arr{
	private:
		int array[3];
		void display(ostream&);
	public:
		arr();
		arr(int, int, int);
		friend ostream& operator<<(ostream&, arr);
};


#endif