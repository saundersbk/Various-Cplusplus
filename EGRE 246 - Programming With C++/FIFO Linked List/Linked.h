#ifndef LINKED_H
#define LINKED_H

#include <cstdlib>

class Linked {
	private:
		struct node {
			int data;
			node *next;
		};
		node *top;
		int size;
	public:
		//Constructor
		Linked();
		
		//Deconstructor
		~Linked();
		
		//Accessors
		void display();
		int getSize();
		
		//Mutators
		void push(int);
		void pop();
	
};

#endif