#include <iostream>
#include "Matrix.h"
using namespace std;

int main()
{
	Matrix mat1;
	Matrix mat2;
	cout << "��Ĭ��������ԣ�" << endl;
	cout << mat1;
	cout << "��Ϊmat1��ֵ��";
	cin >> mat1;
	cout << "mat1��ֵ������ԣ�" << endl;
	cout << mat1;
	cout << endl;

	cout << "����ӷ������ͳ˷��Ĳ��ԣ�" << endl;
	cout << "mat1 + mat2=" << endl << mat1 + mat2;
	cout << "mat1 - mat2=" << endl << mat1 - mat2;
	cout << "mat1 * mat2=" << endl << mat1 * mat2;
	cout << endl;

	cout << "����+=��-=��*=�Ĳ��ԣ�" << endl;
	mat1 += mat2;
	cout << mat1 << endl;
	mat1 -= mat2;
	cout << mat1 << endl;
	mat1 *= mat2;
	cout << mat1 << endl;

	cout << "10*����mat2�Ĳ��ԣ�" << endl;
	Matrix mat3 = 10 * mat2;
	cout << mat3;
}