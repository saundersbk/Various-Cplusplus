/****************************************************************************
 * In Class Assignment number:	10
 *
 * Programmer(s): 	Brandon Saunders, Anthony Newman-Gonzalez
 *
 * Submission Date:	11/12/2017
 *
 * EGRE 246 Fall 2017
 *
 * Pledge: I have neither given nor received unauthorized aid on the program.
 *
 * Description: Median Values with Templates
 *
 *
 ***************************************************************************/
 
 #include <iostream>
 #include <cstdlib>
 #include <string>
 #include <stdio.h>
 #include <exception>
 
 using namespace std;
 
 template<typename T>
 bool IsSorted(T* array, int size) {
	 for (int j = 0; j < size; ++j) {
		 if (j != size-1) {
			if (array[j] > array[j+1]) {
				return false;
			}
		 }
	 }
	 return true;
 }
 
 template <typename T>
 double Median (T* array, int size) {
	 if (size % 2 != 0) {
		 double midIndex = (size / 2) + 0.5;
		 int mid = midIndex;
		 return array[mid];
	 }
	 else {
		 double sum = 0.0;
		 sum = array[(size/2)-1] + array[size/2];
		 double average = sum / 2;
		 return average;
	 }
 }
 
 int main(int argc, char* argv[]) {
	 try {
			if(argc < 3) {
				throw runtime_error("Too few arguments\nUsage: main.exe <data_type> input1 input 2 ...");
			}
			else {
				string type = argv[1];
				if (type == "int") {
					int arr[argc-2];
					for (int i = 0; i < argc-2; ++i) {
						arr[i] = atoi(argv[i+2]);
					}
					if (!IsSorted(arr, argc-2)) {
						throw runtime_error("Data is not sorted");
					}
					else {
						cout << "Median: " << Median(arr, argc-2) << endl;
					}
				}
				else if (type == "double") {
					double arr[argc-2];
					for (int i = 0; i < argc-2; ++i) {
						arr[i] = atof(argv[i+2]);
					}
					if (!IsSorted(arr, argc-2)) {
						throw runtime_error("Data is not sorted");
					}
					else {
						cout << "Median: " << Median(arr, argc-2) << endl;
					}
				}
				else {
					throw runtime_error("Inappropriate data type\nProgram only supports int and double");
				}
			}
	 }
	 catch (runtime_error &excpt) {
		 cout << excpt.what() << endl;
	 }
	 
	 return 0;
 }