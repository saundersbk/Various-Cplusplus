/****************************************************************************
* Project number: 2
*
* Programmer: Brandon Saunders
*
* Submission Date: 09/25/2017
*
* EGRE 246 Fall 2017
*
* Pledge: I have neither given nor received unauthorized aid on the program.
*
* Description: Program a boss battle game using knowledge of classes.
*
*
***************************************************************************/

#include <iostream>
#include <cstdlib>
#include "player.h"

using namespace std;
using std::string;

void stats(player, player); //Display the stats of player one and two
bool winner(player, player); //Check if the winning condition is satisfied by either player


int main() {
	player hero("Monster Hunter");
	player boss("Rathalos");
	srand(42);
	bool win = false;
	bool attacked = false;
	char choice;
	char again = 'Y';
	int cpuChoice;
	int damage = 0;
	
	while (again == 'Y' || again == 'y') {
	while (win == false) {
		attacked = false;
		while (attacked == false) {
			stats(hero, boss);
			cout << "Which attack do you choose? (1,2,3) - ";
			cin  >> choice;
			if (choice != '1' && choice != '2' && choice != '3') {
				while (choice != '1' && choice != '2' && choice != '3') {
					cout << "Please enter a valid choice (1,2,3) - ";
					cin  >> choice;
				}
			}
			
			if (choice == '1') {
				damage = hero.attackLow(hero.getLow());
			}
			else if (choice == '2') {
				damage = hero.attackMid(hero.getMid());
			}
			else {
				damage = hero.attackHigh(hero.getHigh());
			}
			
			if (damage == -1) {
				attacked = false;
				cout << "No more left, please choose another." << endl;
			}
			else {
				if ((boss.getHP() - damage) <= 0) {
					boss.setHP(0);
				}
				else {
					boss.setHP(boss.getHP() - damage);
				}
				attacked = true;
			}
			
		}
		
		win = winner(hero, boss);
		if (win) {
			break;
		}
		else {
			attacked = false;
		}
		
		while (attacked == false) {
			cpuChoice = (rand() % 3) + 1;
			
			if (cpuChoice == 1) {
				damage = boss.attackLow(boss.getLow());
			}
			else if (cpuChoice == 2) {
				damage = boss.attackMid(boss.getMid());
			}
			else {
				damage = boss.attackHigh(boss.getHigh());
			}
			
			if (damage == -1) {
				attacked = false;
			}
			else {
				if ((hero.getHP() - damage) <= 0) {
					hero.setHP(0);
				}
				else {
					hero.setHP(hero.getHP() - damage);
				}
				attacked = true;
			}
		}
		win = winner(hero, boss);
		if (win) {
			break;
		}
		else {
			attacked = false;
		}
		
	}
		cout << "Play Again? (Y/N) - ";
		cin  >> again;
		if (again == 'Y' || again == 'y') {
			boss.reset();
			hero.reset();
			win = false;
			attacked = true;
		}
		else {
			return 0;
		}
		
	}
	return 0;
}

void stats(player one, player two) {
	cout << "Player 1 - HP: " << one.getHP() << "              " << "Player 2 - HP: " << two.getHP() << endl;
	cout << " " << one.getName() << "                  " << two.getName() << endl;
	cout << endl;
	cout << " 1. Attack Low  - " << one.getLow() << " Left         1. Attack Low  - " << two.getLow() << " Left" << endl;
	cout << " 2. Attack Mid  - " << one.getMid() << " Left         2. Attack Mid  - " << two.getMid() << " Left" << endl;
	cout << " 3. Attack High - " << one.getHigh() << " Left         3. Attack High - " << two.getHigh() << " Left" << endl;
	
	return;
}

bool winner(player one, player two) {
	if (one.getHP() == 0) {
		stats(one, two);
		cout << "Winner : " << two.getName() << endl;
		return true;
	}
	else if (two.getHP() == 0) {
		stats(one, two);
		cout << "Winner : " << one.getName() << endl;
		return true;
	}
	else {
		return false;
	}
}