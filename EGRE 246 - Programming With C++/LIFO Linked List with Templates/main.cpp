// File Name: main.cpp
// Functionality: Experiment with lists of varying types
// Brandon K. Saunders 
// Virginia Commonwealth University
 
 #include "arr.h"
 #include "list.h"
 #include <iostream>
 #include <stdio.h>
 #include <cstdlib>
 #include <string>
 #include <sstream>
 #include <vector>
 
 using namespace std;
 
 int main() {
	 list<int> integers; // list1
	 list<char> chars; // list2
	 list<string> strings; //list 3
	 list<arr> arrays; // list 4
	 
	 //Push items to the lists
	 for (int i = 0; i <= 9; ++i) {
		 integers.push(i);
	 }
	 
	 for (char j = 'a'; j <= 'j'; ++j) {
		 chars.push(j);
	 }
	 
	 for (int k = 0; k < 5; ++k) {
		 arrays.push(arr(k*3, k*3+1, k*3+2));
	 }
	 
	 string phrase = "I am the greatest in the entire world";
	 istringstream split(phrase);
	 vector<string> words;
	 int r = 0;
	 do {
		 string substr;
		 split >> substr;
		 if (substr != "\0") {
			words.push_back(substr);
			++r;
		 }
	 } while (split);
	 
	 for (int u = 0; u < r; ++u) {
		 strings.push(words.at(u));
	 }
	 
	 
	 //Display each list, pop 3 times, then display again
	 cout << "list1: Full" << endl;
	 cout << integers << endl;
	 for (int i = 1; i <= 3; ++i) {
		 integers.pop();
	 }
	 cout << "list1: popped 3" << endl;
	 cout << integers << endl;
	 
	 cout << "list2: Full" << endl;
	 cout << chars << endl;
	 for (int i = 1; i <= 3; ++i) {
		 chars.pop();
	 }
	 cout << "list2: popped 3" << endl;
	 cout << chars << endl;
	 
	 cout << "list3: Full" << endl;
	 cout << strings << endl;
	 for (int i = 1; i <= 3; ++i) {
		 strings.pop();
	 }
	 cout << "list3: popped 3" << endl;
	 cout << strings << endl;
	 
	 cout << "list4: Full" << endl;
	 cout << arrays << endl;
	 for (int i = 1; i <= 3; ++i) {
		 arrays.pop();
	 }
	 cout << "list4: popped 3" << endl;
	 cout << arrays << endl;
	 
	 return 0;
 }