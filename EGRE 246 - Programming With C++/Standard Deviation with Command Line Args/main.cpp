// File Name: main.cpp
// Functionality: Calculate standard deviation based on user inputs
//				  from command line.  Requires at least 2 numbers
// Brandon K. Saunders 
// Virginia Commonwealth University
 
 #include <stdio.h>
 #include <cstdlib>
 #include <cmath>
 #include <iostream>
 
 using namespace std;
 
 int main (int argc, char* argv[]) {
	if(argc < 3)
	{
		cout << "Not enough arguments."<< endl;
		cout << "Usage: main.exe num1 num2 ... "<< endl;
		return 1;
	}
	
	double sum = 0.0;
	int N = argc - 1;
	for (int i = 1; i < argc; ++i) {
		sum += atof(argv[i]);
	}
	
	double average = sum / N;
	
	
	double numerator = 0.0;
	for (int j = 1; j < argc; ++j) {
		numerator += pow(atof(argv[j]) - average, 2);
	}
	
	
	double stddev = sqrt(numerator / (N - 1));
	
	cout << "standard deviation: " << stddev << endl;
	
	return 0;
 }