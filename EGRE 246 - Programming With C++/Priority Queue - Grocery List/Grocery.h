#ifndef GROCERY_H
#define GROCERY_H
using std::string;
using std::ostream;

class Grocery {
	private:
		string listName;
		struct item {
			string name;
			double price;
			item *next;
		};
		item *top;
		int size;
		double total;
	public:
		//Constructors
		Grocery();
		Grocery(string);
		
		//Deconstructor
		~Grocery();
		
		//Accessors
		int getSize();
		string getListName();
		string topItem();
		double topPrice();
		void display(ostream&);
		
		//Mutators
		void push(string, double);
		void pop();
		
		//Overloaded Operators
		void operator()(string, double);
		friend ostream& operator<<(ostream&, Grocery&);
	
};

#endif
