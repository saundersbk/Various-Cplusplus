#include "fruit.h"
#include "item.h"
#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <string>
#include <ios>

using namespace std;

//Constructors
fruit::fruit() {
	item :: setItem("", 0.00, "");
	item :: setClass("fruit");
	sellMonth = 0;
	sellDay = 0;
	sellMonth = 0;
}

fruit::fruit(string name, double price, string barCode, string classification, int sellMonth, int sellDay, int sellYear) {
	item :: setItem(name, price, barCode);
	item :: setClass("fruit");
	this->sellMonth = sellMonth;
	this->sellDay = sellDay;
	this->sellYear = sellYear;
}


//Mutators
void fruit::setFruit(string name, double price, string barCode, int sellMonth, int sellDay, int sellYear) {
	item :: setItem(name, price, barCode);
	this->sellMonth = sellMonth;
	this->sellDay = sellDay;
	this->sellYear = sellYear;
}


//Accessors
void fruit::display() {
	item :: display();
	cout << " Sell by date: " << sellMonth << "-" << sellDay << "-" << sellYear << endl;
}