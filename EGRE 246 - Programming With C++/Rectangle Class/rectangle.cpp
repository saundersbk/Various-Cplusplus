#include "rectangle.h"
using namespace std;

rectangle::rectangle() {	//Default constructor
	length = 0.0;		//default length
	width = 0.0;		//default width
	return;
}

rectangle::rectangle(double l, double w) {		//Overloaded constructor
	setLength(l);
	setWidth(w);
	return;
}

void rectangle::setLength(double length) { //Mutator
	this->length = length;
	return;
}

void rectangle::setWidth(double width) { //Mutator
	this->width = width;
	return;
}

double rectangle::getLength() { //Accessor
	return length;
}

double rectangle::getWidth() { //Accessor
	return width;
}

double rectangle::getArea() { //Accessor
	double area = length * width;
	return area;
}

double rectangle::getPerimeter() { //Accessor
	double perimeter = (2*length) + (2*width);
	return perimeter;
}