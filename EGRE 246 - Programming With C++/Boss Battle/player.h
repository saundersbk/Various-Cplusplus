#ifndef PLAYER_H
#define PLAYER_H
using std::string;

class player {
	private:
		int hp;
		string name;
		int low;
		int mid;
		int high;
	public:
		//Constructors
		player();
		player(string);
		
		//Accessors
		int getHP();
		string getName();
		int getLow();
		int getMid();
		int getHigh();
		
		//Mutators
		void setHP(int);
		void setName(string);
		
		//Etc
		int attackLow(int);
		int attackMid(int);
		int attackHigh(int);
		void reset();
};

#endif