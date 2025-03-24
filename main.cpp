#include <iostream>
#include "Matrix.h"
using namespace std;

int main()
{
	Matrix mat1;
	Matrix mat2;
	cout << "类默认输出测试：" << endl;
	cout << mat1;
	cout << "请为mat1赋值：";
	cin >> mat1;
	cout << "mat1赋值结果测试：" << endl;
	cout << mat1;
	cout << endl;

	cout << "矩阵加法减法和乘法的测试：" << endl;
	cout << "mat1 + mat2=" << endl << mat1 + mat2;
	cout << "mat1 - mat2=" << endl << mat1 - mat2;
	cout << "mat1 * mat2=" << endl << mat1 * mat2;
	cout << endl;

	cout << "矩阵+=、-=和*=的测试：" << endl;
	mat1 += mat2;
	cout << mat1 << endl;
	mat1 -= mat2;
	cout << mat1 << endl;
	mat1 *= mat2;
	cout << mat1 << endl;

	cout << "10*矩阵mat2的测试：" << endl;
	Matrix mat3 = 10 * mat2;
	cout << mat3;
}