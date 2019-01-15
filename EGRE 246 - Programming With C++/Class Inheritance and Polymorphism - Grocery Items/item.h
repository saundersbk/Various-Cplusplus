#ifndef ITEM_H
#define ITEM_H

#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>

using namespace std;

class item {
	private:
		string name;
		double price;
		string barCode;
		string classification;
	
	public:
	//Constructors
		item();
		item(string, double, string);
	//Mutators
		virtual void setItem(string, double, string);
		virtual void setClass(string);
	//Accessors
		virtual void display();
};

#endif