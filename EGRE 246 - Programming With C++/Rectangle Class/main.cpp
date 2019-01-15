/****************************************************************************
 * In Class Assignment number: 4
 *
 * Programmer(s): 	Brandon Saunders, Justin George
 *
 * Submission Date: 09/18/2017
 *
 * EGRE 246 Fall 2017
 *
 * Pledge: I have neither given nor received unauthorized aid on the program.
 *
 * Description: Program a basic class for a rectangle.
 *
 *
 ***************************************************************************/
 
 #include <iostream>
 #include "rectangle.h"
 
 using namespace std;
 
 int main() {
	 rectangle r1;
	 rectangle r2(3.0, 4.0);
	 r1.setLength(10.0);
	 r1.setWidth(8.0);
	 cout << "Rectangle 1" << endl;
	 cout << "length = " << r1.getLength() << "  width = " << r1.getWidth() << endl;
	 cout << "area = " << r1.getArea() << endl;
	 cout << "perimeter = " << r1.getPerimeter() << endl;
	 cout << endl;
	 
	 cout << "Rectangle 2" << endl;
	 cout << "length = " << r2.getLength() << "  width = " << r2.getWidth() << endl;
	 cout << "area = " << r2.getArea() << endl;
	 cout << "perimeter = " << r2.getPerimeter() << endl;
	 cout << endl;
	 
	 cout << "Add Perimeters = " << (r1.getPerimeter() + r2.getPerimeter()) << endl;
	 cout << "Subtract Areas = " << (r1.getArea() - r2.getArea()) << endl;
	 
	 
	 return 0;
 }