#include<iostream>
using namespace std;

//GLOBAL VARIABLES
//set up an empty string inventory using an array (10 slots)
string inventory[10];
int main() {
	int room = 1;
	string input;
	do {
		switch (room) {
		case 1:
			cout << "you're in room 1, you can go south" << endl;
			cin >> input;
			if (input == "south")
				room = 2;
			break;
		case 2:
			cout << "you're in room 1, you can go south" << endl;
			cin >> input;
			if (input == "south")
				room = 3;
			break;
		case 3:
			cout << "you're in room 1, you can go south" << endl;
			cin >> input;
			if (input == "south")
				room = 4;
			break;
		case 4:
			cout << "you're in room 1, you can go south" << endl;
			cin >> input;
			if (input == "south")
				room = 5;
			break;
		case 5:
			cout << "you're in room 1, you can go south" << endl;
			cin >> input;
			if (input == "south")
				room = 6;
			break;
		case 6:
			cout << "you're in room 1, you can go south" << endl;
			cin >> input;
			if (input == "south")
				room = 7;
			break;
		case 7:
			cout << "you're in room 1, you can go south" << endl;
			cin >> input;
			if (input == "south")
				room = 8;
			break;
		case 8:
			cout << "you're in room 1, you can go south" << endl;
			cin >> input;
			if (input == "south")
				room = 9;
			break;
		case 9:
			cout << "you're in room 1, you can go south" << endl;
			cin >> input;
			if (input == "south")
				room = 10;
			break;
		case 10:
		}
	}
