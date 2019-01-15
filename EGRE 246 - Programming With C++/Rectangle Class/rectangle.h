class rectangle {
	public:
		//public members
		void setLength(double length); //Mutator
		void setWidth(double width); //Mutator
		double getLength(); //Accessor
		double getWidth(); //Accessor
		double getArea(); //Accessor
		double getPerimeter(); //Accessor
		rectangle(); // Default Constructor
		rectangle(double l, double w); // Overloaded Constructor
	private:
		//private members
		double length;
		double width;
};
