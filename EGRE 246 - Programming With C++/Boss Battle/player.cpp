#include <iostream>
#include <cstdlib>
#include "player.h"

using namespace std;

//Constructors
player::player() {
	hp = 100;
	name = " ";
	low = 8;
	mid = 4;
	high = 2;
	return;
}

player::player(string name) {
	this->name = name;
	hp = 100;
	low = 8;
	mid = 4;
	high = 2;
	return;
}


//Accessors
int player::getHP() {
	return hp;
}

string player::getName() {
	return name;
}

int player::getLow() {
	return low;
}

int player::getMid() {
	return mid;
}

int player::getHigh() {
	return high;
}


//Mutators
void player::setHP(int hp) {
	this->hp = hp;
	return;
}

void player::setName(string name) {
	this->name = name;
	return;
}


//Etc
int player::attackLow(int low) {
	if (low == 0) {
		return -1;
	}
	else {
		this->low = low - 1;
		return rand() % 20;
	}
}

int player::attackMid(int mid) {
	if (mid == 0) {
		return -1;
	}
	else {
		this->mid = mid - 1;
		return (rand() % 20) + 10;
	}
}

int player::attackHigh(int high) {
	if (high == 0) {
		return -1;
	}
	else {
		this->high = high - 1;
		return (rand() % 20) + 20;
	}
}

void player::reset() {
	hp = 100;
	low = 8;
	mid = 4;
	high = 2;
	return;
}