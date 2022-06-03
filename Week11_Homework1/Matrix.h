#pragma once
#include <iostream>
#include <iomanip>
using namespace std;

class Matrix {
	int rows, cols;		// 행과 열의 크기
	int** mat;		// 실제 행렬 데이터
public:
	Matrix(int r = 0, int c = 0) { //10~14
		mat = new int* [rows];
		for (int i = 0; i < rows; i++)
			mat[i] = new int[cols];
	}
	~Matrix() { // 15~21
		if (mat != NULL) {
			for (int i = 0; i < rows; i++)
				delete[] mat[i];
			delete[] mat;
		}
	}
	int& elem(int x, int y) { return mat[y][x]; } //22~25
	int Rows() { return rows; }
	int Cols() { return cols; }
	int** Data() { return mat; };
	void print(const char* str = "Mat") { //26~33
		cout << str << " " << rows << "x" << cols << endl;
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++)
				cout << setw(4) << mat[i][j];
			cout << "\n";
		}
	}
	void setRand(int val = 100) { //34~40
		if (mat != NULL) {
			for (int i = 0; i < rows; i++)
				for (int j = 0; j < cols; j++)
					mat[i][j] = (rand() % val);
		}
	}
};