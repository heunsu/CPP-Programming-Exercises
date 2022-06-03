#pragma once
#include <iostream>
#include <string>
#include "Point.h"			// Point ����� ���� �߰�
#define MAXLINES 100
using namespace std;

class Canvas {               //8��
	string line[MAXLINES];   //5,9��
	int xMax, yMax;
public:
	Canvas(int nx = 10, int ny = 10) : xMax(nx), yMax(ny) {      //12��
		for (int y = 0; y < yMax; y++)
			line[y] = string(xMax * 2, ' ');                     //14��
	}
	void draw(int x, int y, string val) {                        //16~19
		if (x >= 0 && y >= 0 && x < xMax && y < yMax)
			line[y].replace(x * 2, 2, val);
	}

	// ���� �Լ� �߰�
	void draw(Point& p, string val) { draw(p.x, p.y, val); }

	void clear(string val = ". ") {		                         //24~28
		for (int y = 0; y < yMax; y++)
			for (int x = 0; x < xMax; x++)
				draw(x, y, val);
	}
	void print(const char* title = "<My Canvas>") {             //29~
		system("cls");
		cout << title << endl;
		for (int y = 0; y < yMax; y++)
			cout << line[y] << endl;
		cout << endl;
	}
};