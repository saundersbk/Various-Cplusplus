// File Name: list.cpp
// Functionality: Enable proper program compilation
// Brandon K. Saunders 
// Virginia Commonwealth University

#include "list.h"

// list::list() {
	// top = NULL;
// }

// list::~list() {
	// while (top!= NULL) {
		// pop();
	// }
// }

// void list::push(T data) {
	// node* nNode;
	// nNode = new node;
	// nNode->data = data;
	// nNode->next = NULL;
	// if (top == NULL) {
		// top = nNode;
	// }
	// else {
		// nNode->next = top;
		// top = nNode;
	// }
// }

// void list::pop() {
	// if (top != NULL) {
		// node* ptr;
		// ptr = top;
		// if (ptr->next == NULL) {
			// top = NULL;
			// free(ptr);
		// }
		// else {
			// top = top->next;
			// free(ptr);
		// }
	// }
// }

// void list::display(ostream& os) {
	// if (top == NULL) {
		// os << "EMPTY" << endl;
	// }
	// else {
		// node* ptr;
		// ptr = top;
		// int i = 1;
		// while (ptr != NULL) {
			// os << i << ". " << ptr->data << endl;
			// ptr = ptr->next;
			// ++i;
		// }
	// }
// }

// ostream& operator<<(ostream& os, list& L) {
	// L.display(os);
	// return os;
// }