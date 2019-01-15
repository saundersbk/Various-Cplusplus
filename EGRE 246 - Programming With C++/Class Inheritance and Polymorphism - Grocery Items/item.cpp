#include "item.h"
#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <string>
#include <ios>

using namespace std;

//Constructors
item::item() {
	name = "";
	price = 0.00;
	barCode = "";
	classification = "general";
}

item::item(string name, double price, string barCode) {
	this->name = name;
	this->price = price;
	this->barCode = barCode;
	classification = "general";
}


//Mutators
void item::setItem(string name, double price, string barCode) {
	this->name = name;
	this->price = price;
	this->barCode = barCode;
}

void item::setClass(string classification) {
	this->classification = classification;
}

//Accessors
void item::display() {
	cout << name << ": " << classification << endl;
	cout << " price - $" << setprecision(2) << fixed << price << endl;
	cout << " gs1   - " << setprecision(13) << barCode << endl;
}