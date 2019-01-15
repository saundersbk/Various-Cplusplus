/****************************************************************************
 * Project number: 5
 *
 * Programmer: 	Brandon Saunders
 *
 * Submission Date: 11/9/2017
 *
 * EGRE 246 Fall 2017
 *
 * Pledge: I have neither given nor received unauthorized aid on the program.
 *
 * Description: Apply Class Inheritance to a Grocery Store
 *
 *
 ***************************************************************************/
#include "dairy.h"
#include "fruit.h"
#include "item.h"
#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <string>
#include <exception>
#include <fstream>
#include <vector>
#include <ios>

using namespace std;

int main(int argc, char *argv[]) {
	//Check to see if 2 arguments are entered.
	try {
		if (argc > 2 || argc < 2) {
			throw runtime_error("Insufficient amount of inputs.");
		}
	}
	catch(runtime_error &excpt) {
		cout << "Must enter in two arguments: main filename" << endl;
		return -1;
	}
	
	ifstream infile;
	infile.open(argv[1]);
	if(!infile.is_open()) {
		cout << "Error: file not found in directory." << endl;
		return -1;
	}
	
	vector<item*> data;
	string x;	//String to read item type from file
	int i = 0;	//Keeps track of how many items
	while(!infile.eof()) {
		getline(infile, x, ',');
		if(x == "item") {
			string n, p, bc;
			item* iptr;
			iptr = new item;
			getline(infile, n, ',');
			if(!infile.good()) {
				n = "";
			}
			getline(infile, p, ',');
			if(!infile.good()) {
				p = "0.00";
			}
			getline(infile, bc, ',');
			if(!infile.good()) {
				bc = "";
			}
			iptr->setItem(n, stod(p), (bc));
			data.push_back(iptr);
			++i;
		}
		else if(x == "fruit") {
			string n, p, bc, sbm, sbd, sby;
			fruit* fptr;
			fptr = new fruit;
			getline(infile, n, ',');
			if (!infile.good()) {
				n = "";
			}
			getline(infile, p, ',');
			if (!infile.good()) {
				p = "0.00";
			}
			getline(infile, bc, ',');
			if (!infile.good()) {
				bc = "";
			}
			getline(infile, sbm, ',');
			if (!infile.good()) {
				sbm = "0";
			}
			getline(infile, sbd, ',');
			if (!infile.good()) {
				sbd = "0";
			}
			getline(infile, sby, ',');
			if (!infile.good()) {
				sby = "0";
			}
			fptr->setFruit(n, stod(p), bc, stoi(sbm), stoi(sbd), stoi(sby));
			data.push_back(fptr);
			++i;
		}
		else if(x == "dairy") {
			string n, p, bc, em, ed, ey, t;
			dairy* dptr;
			dptr = new dairy;
			getline(infile, n, ',');
			if(!infile.good()) {
				n = "";
			}
			getline(infile, p, ',');
			if(!infile.good()) {
				p = "0.00";
			}
			getline(infile, bc, ',');
			if(!infile.good()) {
				bc = "";
			}
			getline(infile, em, ',');
			if(!infile.good()) {
				em = "0";
			}
			getline(infile, ed, ',');
			if(!infile.good()) {
				ed = "0";
			}
			getline(infile, ey, ',');
			if (!infile.good()) {
				ey = "0";
			}
			getline(infile,t, ',');
			if(!infile.good()) {
				t = "0.0";
			}
			dptr->setDairy(n, stod(p), bc, stoi(em), stoi(ed), stoi(ey), stod(t));
			data.push_back(dptr);
			++i;
		}
		else {
			cout << "Broken data." << endl;
		}
	}
	infile.close();
	
	for (int j = 0; j < i; ++j) {
		cout << j+1 << "-";
		data.at(j)->display();
		cout << endl;
	}
	
	return 0;
}