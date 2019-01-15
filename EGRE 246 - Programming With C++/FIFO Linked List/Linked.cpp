#include <iostream>
#include <cstdlib>
#include "Linked.h"

using namespace std;

//Constructor
Linked::Linked() {
	size = 0;
	top = NULL;
	return;
}

//Deconstructor
Linked::~Linked() {
	while (top != NULL) {
		pop();
	}
	display();
	return;
}


//Accessors
void Linked::display() {
	node *p;
	p = top;
	int i = 1;
	if (top == NULL) {
		cout << "EMPTY LIST" << endl << endl;
	}
	else {
		while (p != NULL) {
			cout << i << ". " << p->data << endl;
			p = p->next;
			i++;
		}
		cout << endl;
	}
	return;
}

int Linked::getSize() {
	return size;
}


//Mutators
void Linked::push(int dat) {
	node *nNode;
	nNode = new node;
	nNode->data = dat;
	nNode->next = NULL;
	if (top == NULL) {
		top = nNode;
	}
	else {
		nNode->next = top;
		top = nNode;
	}
	size++;
	return;
}

void Linked::pop() {
	if (top != NULL) {
		node* p;
		p = top;
		if (p->next == NULL) {
			top = NULL;
			free(p);
		}
		else {
			top = top->next;
			free(p);
		}
		size--;
	}
	else {
		;
	}
	return;
}