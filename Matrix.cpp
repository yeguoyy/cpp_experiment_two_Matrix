#include "Matrix.h"

Matrix::Matrix()
{
	//单位矩阵
	Mat[1][1] = 1;
	Mat[1][2] = 0;
	Mat[2][1] = 0;
	Mat[2][2] = 1;
}
Matrix Matrix :: operator+(const Matrix& mat)
{
	Matrix temp;
	for (int i = 1; i <= 2; i++)
	{
		for (int j = 1; j <= 2; j++)
		{
			temp.Mat[i][j] = mat.Mat[i][j] + this->Mat[i][j];
		}
	}
	return temp;
}
Matrix Matrix :: operator-(const Matrix& mat)
{
	Matrix temp;
	for (int i = 1; i <= 2; i++)
	{
		for (int j = 1; j <= 2; j++)
		{
			temp.Mat[i][j] = this->Mat[i][j] - mat.Mat[i][j];
		}
	}
	return temp;
}
Matrix Matrix::operator*(const Matrix& mat)
{
	Matrix temp;

	for (int i = 1; i <= 2; i++)
	{
		for (int j = 1; j <= 2; j++)
		{
			temp.Mat[i][j] = 0;
			for (int x = 1; x <= 2; x++)
			{
				temp.Mat[i][j] += this->Mat[i][x] * mat.Mat[x][j];
			}
		}
	}
	return temp;
}

Matrix& Matrix::operator+=(const Matrix& mat)
{
	for (int i = 1; i <= 2; i++)
	{
		for (int j = 1; j <= 2; j++)
		{
			this->Mat[i][j] += mat.Mat[i][j];
		}
	}

	return *this;
}
Matrix& Matrix::operator-=(const Matrix& mat)
{
	for (int i = 1; i <= 2; i++)
	{
		for (int j = 1; j <= 2; j++)
		{
			this->Mat[i][j] -= mat.Mat[i][j];
		}
	}
	return *this;
}
Matrix& Matrix::operator*=(const Matrix& mat)
{
	Matrix temp;

	for (int i = 1; i <= 2; i++)
	{
		for (int j = 1; j <= 2; j++)
		{
			temp.Mat[i][j] = 0;
			for (int x = 1; x <= 2; x++)
			{
				temp.Mat[i][j] += this->Mat[i][x] * mat.Mat[x][j];
			}
		}
	}
	*this = temp;
	return *this;
}
bool Matrix::operator==(const Matrix& mat)
{
	for (int i = 1; i <= 2; i++)
	{
		for (int j = 1; j <= 2; j++)
		{
			if (this->Mat[i][j] != mat.Mat[i][j])
			{
				return false;
			}
		}
	}
    return true;
}

bool Matrix::operator!=(const Matrix& mat)
{
	for (int i = 1; i <= 2; i++)
	{
		for (int j = 1; j <= 2; j++)
		{
			if (this->Mat[i][j] != mat.Mat[i][j])
			{
				return true;
			}
		}
	}
	return false;
}


ostream& operator << (ostream& cout, const Matrix& mat)
{
	for (int i = 1; i <= 2; i++)
	{
		for (int j = 1; j <= 2; j++)
		{
			cout << mat.Mat[i][j] << " ";
		}
		cout << endl;
	}
	return cout;
}
istream& operator >> (istream& cin, Matrix& mat)
{
	for (int i = 1; i <= 2; i++)
	{
		for (int j = 1; j <= 2; j++)
		{
			cin >> mat.Mat[i][j];
		}
	}
	return cin;
}
