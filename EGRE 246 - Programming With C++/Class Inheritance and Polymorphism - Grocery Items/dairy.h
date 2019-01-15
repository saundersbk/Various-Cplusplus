#ifndef DAIRY_H
#define DAIRY_H

#include "fruit.h"
#include "item.h"
#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <string>
#include <ios>

using namespace std;

class dairy : public item {
	private:
		int expMonth;
		int expDay;
		int expYear;
		double temp;
	
	public:
	//Constructors
		dairy();
		dairy(string, double, string, int, int, int, double);
	//Mutators
		void setDairy(string, double, string, int, int, int, double);
	//Accessors
		void display();
};

#endif