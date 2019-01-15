#include "dairy.h"
#include "fruit.h"
#include "item.h"
#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <string>
#include <ios>

using namespace std;

//Constructors
dairy::dairy() {
	item :: setItem("", 0.00, "");
	item :: setClass("dairy");
	expMonth = 0;
	expDay = 0;
	expYear = 0;
	temp = 0.0;
}

dairy::dairy(string name, double price, string barCode, int expMonth, int expDay, int expYear, double temp) {
	item :: setItem(name, price, barCode);
	item :: setClass("dairy");
	this->expMonth = expMonth;
	this->expDay = expDay;
	this->expYear = expYear;
	this->temp = temp;
}


//Mutators
void dairy::setDairy(string name, double price, string barCode, int expMonth, int expDay, int expYear, double temp) {
	item :: setItem(name, price, barCode);
	this->expMonth = expMonth;
	this->expDay = expDay;
	this->expYear = expYear;
	this->temp = temp;
}


//Accessors
void dairy::display() {
	item :: display();
	cout << " exp date: " << expMonth << "-" << expDay << "-" << expYear << endl;
	cout << " storage temperature: " << setprecision(1) << fixed << temp << " degrees F" << endl;
}