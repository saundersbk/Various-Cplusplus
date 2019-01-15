/****************************************************************************
 * In Class Assignment number: 5
 *
 * Programmer(s): 	Brandon Saunders
 *
 * Submission Date: 09/24/2017
 *
 * EGRE 246 Fall 2017
 *
 * Pledge: I have neither given nor received unauthorized aid on the program.
 *
 * Description: Program a FIFO Linked List
 *
 *
 ***************************************************************************/
 
 #include <iostream>
 #include <cstdlib>
 #include "Linked.h"
 
 using namespace std;
 
 int main() {
	 Linked L;
	 int i;
	 
	 L.display();
	 for (i = 10; i >= 0; --i) {
		 L.push(i);
	 }
	 L.display();
	 L.pop();
	 L.pop();
	 L.pop();
	 L.display();
	 
	 
	 return 0;
 }