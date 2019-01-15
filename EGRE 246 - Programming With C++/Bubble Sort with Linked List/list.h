#ifndef LIST_H
#define LIST_H

#include <iostream>

using namespace std;

template<typename T>
class list;

template<typename T>
ostream& operator<<(ostream&, list<T>&);

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
		void bubbleSort();
		friend ostream& operator<< <>(ostream&, list<T>&);
};

template <typename T>
list<T>::list() {
	top = NULL;
}

template <typename T>
list<T>::~list() {
	while (top!= NULL) {
		pop();
	}
}

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
			os << i << ".      " << ptr->data << endl;
			ptr = ptr->next;
			++i;
		}
	}
}


template<typename T>
void list<T>::bubbleSort() {
	bool swap;
	node* ptr;
	T temp;
	do {
		ptr = top;
		swap = false;
		while (ptr->next != NULL) {
			if (ptr->data > ptr->next->data) {
				temp = ptr->data;
				ptr->data = ptr->next->data;
				ptr->next->data = temp;
				swap = true;
			}
			ptr = ptr->next;
		}
	} while(swap);
}

template <typename T>
ostream& operator<<(ostream& os, list<T>& L) {
	L.display(os);
	return os;
}

#endif