/****************************************************************************
 * In Class Assignment number: 6
 *
 * Programmer(s): 	Brandon Saunders, Anthony Newman-Gonzalez
 *
 * Submission Date: 09/30/2017
 *
 * EGRE 246 Fall 2017
 *
 * Pledge: I have neither given nor received unauthorized aid on the program.
 *
 * Description: Apply overloaded operators to complex numbers in C++
 *
 *
 ***************************************************************************/
 
 #include <iostream>
 #include <cmath>
 #include "complex.h"
 
 using namespace std;
 using std::ostream;
 
 int main() {
	 complex n01(1.0, 8.0);
	 complex n02(2.0, 7.0);
	 complex n03(3.0, 6.0);
	 complex n04(4.0, 5.0);
	 
	 //Print n01 to n04 using overloaded << operator
	 cout << "num01 = " << n01 << endl; 
	 cout << "num02 = " << n02 << endl; 
	 cout << "num03 = " << n03 << endl; 
	 cout << "num04 = " << n04 << endl; 
	 cout << endl;
	 
	 //Perform operations using overloaded + or - operators, then print n05 to n010 using overloaded << operator
	 complex n05 = n01 + n02;			
	 cout << "num05 = num01 + num02 : " << n05 << endl; 
	 
	 complex n06 = n03 + 3.0;			
	 cout << "num06 = num03 + 3.0   : " << n06 << endl; 
	 
	 complex n07 = 5.7 + n04;			
	 cout << "num07 = 5.7   + num04 : " << n07 << endl; 
	 
	 complex n08 = n01 - n02;
	 cout << "num08 = num01 - num02 : " << n08 << endl;
	 
	 complex n09 = n03 - 3.0;
	 cout << "num09 = num03 - 3.0   : " << n09 << endl;
	 
	 complex n010 = 5.7 - n04;
	 cout << "num10 = 5.7   - num04 : " << n010 << endl;
	 
	 return 0;
 }