#ifndef FRUIT_H
#define FRUIT_H

#include "item.h"
#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <string>
#include <ios>

using namespace std;

class fruit : public item {
	private:
		int sellMonth;
		int sellDay;
		int sellYear;
	
	public:
	//Constructors
		fruit();
		fruit(string, double, string, string, int, int, int);
	//Mutators
		void setFruit(string, double, string, int, int, int);
	//Accessors
		void display();
};

#endif