// File Name: list.h
// Functionality: Declare and define the list class
// Brandon K. Saunders 
// Virginia Commonwealth University

#ifndef LIST_H
#define LIST_H

#include <iostream>

using namespace std;

// Class prototype
template<typename T>
class list;

// Overloaded << prototype
template<typename T>
ostream& operator<<(ostream&, list<T>&);

// Define the list class
template <typename T>
class list {
	private:
		struct node {
			T data;
			node* next;
		};
		node* top;
	public:
		list();
		~list();
		void push(T);
		void pop();
		void display(ostream&);
		friend ostream& operator<< <>(ostream&, list<T>&);
};

// Constructor, declares new list
template <typename T>
list<T>::list() {
	top = NULL;
}

// Deconstructor, clears contents of list
template <typename T>
list<T>::~list() {
	while (top!= NULL) {
		pop();
	}
}

// Method to push new node to list
template <typename T>
void list<T>::push(T data) {
	node* nNode;
	nNode = new node;
	nNode->data = data;
	nNode->next = NULL;
	if (top == NULL) {
		top = nNode;
	}
	else {
		nNode->next = top;
		top = nNode;
	}
}

// Method to delete latest node of list
template <typename T>
void list<T>::pop() {
	if (top != NULL) {
		node* ptr;
		ptr = top;
		if (ptr->next == NULL) {
			top = NULL;
			free(ptr);
		}
		else {
			top = top->next;
			free(ptr);
		}
	}
}

// Method to display the contents of list
template <typename T>
void list<T>::display(ostream& os) {
	if (top == NULL) {
		os << "EMPTY" << endl;
	}
	else {
		node* ptr;
		ptr = top;
		int i = 1;
		while (ptr != NULL) {
			os << i << ". " << ptr->data << endl;
			ptr = ptr->next;
			++i;
		}
	}
}

// Overload << operator to display list contents using cout
template <typename T>
ostream& operator<<(ostream& os, list<T>& L) {
	L.display(os);
	return os;
}

#endif