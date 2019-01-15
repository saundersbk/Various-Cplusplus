#ifndef COMPLEX_H
#define COMPLEX_H
using std::ostream;

class complex {
	private:
		double real;
		double imag;
	public:
		//Constructors
		complex();
		complex(double, double);
		
		//Accessors
		double getReal();
		double getImag();
		
		//Overload + operator
		complex operator+(complex);
		friend complex operator+(complex, double);
		friend complex operator+(double, complex);
		
		//Overload - operator
		complex operator-(complex);
		friend complex operator-(complex, double);
		friend complex operator-(double, complex);
		
		//Overload << operator
		friend ostream& operator<<(ostream&, complex&);
};

#endif