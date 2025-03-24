#pragma once
#include <iostream>
using namespace std;

class Matrix
{
	friend ostream& operator << (ostream&, const Matrix&);
	friend istream& operator >> (istream&, Matrix&);

	template <class T>
	friend Matrix operator*(T, const Matrix&);
private:
	int Mat[3][3];
public:

	Matrix();
	Matrix operator+(const Matrix&);
	Matrix operator-(const Matrix&);
	Matrix operator*(const Matrix&);

	Matrix& operator+=(const Matrix&);
	Matrix& operator-=(const Matrix&);
	Matrix& operator*=(const Matrix&);

	bool operator==(const Matrix&);
	bool operator!=(const Matrix&);
};
ostream& operator << (ostream&, const Matrix&);
istream& operator >> (istream&, Matrix&);

template <class T>
Matrix operator*(T k, const Matrix& mat)
{
	Matrix temp;
	for (int i = 1; i <= 2; i++)
	{
		for (int j = 1; j <= 2; j++)
		{
			temp.Mat[i][j] = mat.Mat[i][j] * k;
		}
	}
	return temp;
}


