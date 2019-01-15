/****************************************************************************
 * In Class Assignment number: 9
 *
 * Programmer(s): 	Brandon Saunders,
 *
 * Submission Date: 11/5/2017
 *
 * EGRE 246 Fall 2017
 *
 * Pledge: I have neither given nor received unauthorized aid on the program.
 *
 * Description: Searching Strings and Exceptions
 *
 *
 ***************************************************************************/
 
 #include <stdio.h>
 #include <cstdlib>
 #include <cmath>
 #include <iostream>
 #include <exception>
 #include <string>
 
 using namespace std;
 
 int main(int argc, char* argv[]) {
	 // Check if user inputted correct amount of arguments
	 try {
		if(argc > 3 || argc < 3) {
			throw runtime_error("Invalid number of inputs.");
		}
	 }
	 catch(runtime_error &excpt) {
		 cout << excpt.what() << endl;
		 return 1;
	 }
	 
	 //Check to see if argv[2] is present in argv[1]
	 string search = argv[1];
	 string token = argv[2];
	 try {
		 int i = search.find(token);
		 if(i == -1) {
			 throw runtime_error("Instance not found in string.");
		 }
		 else {
			 cout << token << " was found at index " << i << " of " << search << endl;
		 }
	 }
	 catch(runtime_error &excpt) {
		 cout << token << " was not found in " << search << endl;
		 return 1;
	 }
	return 0;
 }