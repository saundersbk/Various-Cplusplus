/****************************************************************************
 * Project number: 7
 *
 * Programmer: 	Brandon Saunders
 *
 * Submission Date: 11/30/2017
 *
 * EGRE 246 Fall 2017
 *
 * Pledge: I have neither given nor received unauthorized aid on the program.
 *
 * Description: Bubble Sort for Linked List
 *
 *
 ***************************************************************************/
 
 #include "list.h"
 #include <iostream>
 #include <stdio.h>
 #include <cstdlib>
 #include <string>
 #include <sstream>
 #include <vector>
 #include <exception>
 
 using namespace std;
 
 int main(int argc, char* argv[]) {
	 //Check to see if enough arguments were entered:
	 try {
		 if (argc < 3) {
			 throw runtime_error("Too few arguments\nUsage: main.exe NUMBER_OF_ITEMS SEED");
		 }
	 }
	 catch(runtime_error &excpt) {
		 cout << excpt.what() << endl;
		 return 1;
	 }
	 
	 
	 //Seed with value of 3rd argument passed:
	 srand(atoi(argv[2]));
	 
	 
	 //Declare two linked lists:
	 list<int> ints; // List 1
	 list<char> chars; // List 2
	 
	 
	 //Push argv[1] random values into both lists:
	 for (int i = 0; i < atoi(argv[1]); ++i) {
		 ints.push(rand()%100);
		 chars.push('a'+rand()%26);
	 }
	 
	 
	 //Display unsorted then sorted for each list:
	 cout << "List 1:" << endl;
	 cout << ints << endl;
	 ints.bubbleSort();
	 cout << ints << endl;
	 
	 cout << "List 2:" << endl;
	 cout << chars << endl;
	 chars.bubbleSort();
	 cout << chars << endl;
	 
	 
	 return 0;
 }