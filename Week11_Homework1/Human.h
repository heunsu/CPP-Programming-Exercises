#pragma once
#include "Monster.h"
#include <conio.h>
enum Direction { Left = 75, Right = 77, Up = 72, Down = 80 };

class Human : public Monster {
public:
	Human(string n = "미래인류", string i = "♀", int px = 0, int py = 0)
		: Monster(n, i, px, py) {}
	~Human() { cout << " [Human]"; }                             //10
	int getDirKey() { return _getche() == 224 ? _getche() : 0; }    //11
	void move(int** map, int maxx, int maxy) {
		if (_kbhit()) {                                             //13
			char ch = getDirKey();                                  //14~21
			if (ch == Left) p[0]--;
			else if (ch == Right) p[0]++;
			else if (ch == Up) p[1]--;
			else if (ch == Down) p[1]++;
			else return;

			clip(maxx, maxy);
			eat(map);
		}
	}
};

class Robot : public Monster {
public:
	Robot(string n = "로보트", string i = "롯", int px = 0, int py = 0)
		: Monster(n, i, px, py) {}
	~Robot() { cout << " [Human]"; }                             //10
	int getDirKey() { return _getche() == 224 ? _getche() : 0; }    //11
	void move(int** map, int maxx, int maxy) {
		if (_kbhit()) {                                             //13
			char hd = getDirKey();
			scanf_s("%c", &hd); //14~21
			if (&hd == "a") p[0]--;
			else if (&hd == "d") p[0]++;
			else if (&hd == "w") p[1]--;
			else if (&hd == "s") p[1]++;
			else return;

			clip(maxx, maxy);
			eat(map);
		}
	}
};

