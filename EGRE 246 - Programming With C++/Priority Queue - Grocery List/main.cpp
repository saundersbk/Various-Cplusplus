/****************************************************************************
* Project number: 3
*
* Programmer: Brandon Saunders
*
* Submission Date: 10/13/2017
*
* EGRE 246 Fall 2017
*
* Pledge: I have neither given nor received unauthorized aid on the program.
*
* Description: Program priority queue for a grocery shopping list.
*
*
***************************************************************************/

#include <iostream>
#include <cstdlib>
#include "Grocery.h"

using namespace std;
using std::string;
using std::ostream;

int main() {
	Grocery L1("Shopping List");
	Grocery L2("Shopping Cart");
	
	L1.push("Gallon of Milk", 6.99);
	L1.push("Dozen Eggs", 5.69);
	L1.push("Peanut Butter", 4.99);
	L1.push("Chicken Strips", 6.99);
	L1.push("Ice Cream", 4.00);
	L1.push("Cereal", 3.98);
	L1.push("3lbs of Apples", 4.11);
	L1.push("Gift Card", 10.00);
	L1.push("10 pack of socks", 19.78);
	L1.push("48 count AA Batteries", 14.49);
	
	cout << "List: " << L1.getListName() << endl;
	cout << L1 << endl;
	cout << "...Shopping..." << endl << endl;
	
	double budget = 50.00;
	while (budget - L1.topPrice() >= 0) {
			L2(L1.topItem(), L1.topPrice());
			budget = budget - L1.topPrice();
			L1.pop();
	}
	
	cout << "List: " << L1.getListName() << endl;
	cout << L1 << endl;
	
	cout << "List: " << L2.getListName() << endl;
	cout << L2;
	
	return 0;
}