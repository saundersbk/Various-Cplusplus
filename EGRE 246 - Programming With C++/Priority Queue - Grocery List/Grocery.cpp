#include <iostream>
#include <cstdlib>
#include "Grocery.h"
using namespace std;
using std::ostream;

//Constructors
Grocery::Grocery() {
	listName = " ";
	size = 0;
	top = NULL;
	total = 0.0;
	return;
}

Grocery::Grocery(string listName) {
	this->listName = listName;
	size = 0;
	top = NULL;
	total = 0.0;
	return;
}


//Deconstructor
Grocery::~Grocery() {
	while (top != NULL) {
		pop();
	}
	return;
}


//Accessors
int Grocery::getSize() {
	return size;
}

string Grocery::getListName() {
	return listName;
}

string Grocery::topItem() {
	return top->name;
}

double Grocery::topPrice() {
	return top->price;
}

void Grocery::display(ostream& os) {
	if (top == NULL) {
		os << "EMPTY" << endl;
	}
	else {
		item *ptr;
		ptr = top;
		int i = 1;
		while (ptr != NULL) {
			os << i << ".  " << ptr->name << " - $" << ptr->price << endl;
			ptr = ptr->next;
			i++;
		}
		os << "Total - $" << total << endl;
	}
}


//Mutators
void Grocery::push(string n, double p) {
	item *nItem;
	nItem = new item;
	nItem->name = n;
	nItem->price = p;
	nItem->next = NULL;
	if (top == NULL) {
		top = nItem;
	}
	else if (nItem->price < top ->price){
		nItem->next = top;
		top = nItem;
	}
	else {
		item *ptr;
		ptr = top;
		while (ptr->next != NULL && ptr->next->price < nItem->price) {
			ptr = ptr->next;
		}
		nItem->next = ptr->next;
		ptr->next = nItem;
	}
	++size;
	total = total + p;
	return;
}

void Grocery::pop() {
	if (top != NULL) {
		item* ptr;
		ptr = top;
		if (ptr->next == NULL) {
			top = NULL;
			total = total - ptr->price;
			delete(ptr);
		}
		else {
			top = top->next;
			total = total - ptr->price;
			delete(ptr);
		}
		size--;
	}
	return;
}


//Overloaded Operators
void Grocery::operator()(string n, double p) {
	push(n, p);
}

ostream& operator<<(ostream& os, Grocery& L) {
	L.display(os);
	return os;
}