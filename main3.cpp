/*
#include <iostream>

using namespace std;

constexpr int fac(int n) {
	return n > 1 ? n * fac(n - 1) : 1;
} //

int main()
{
	
	//int x = 2999999999;
	//cout << "x = " << x << endl; //x�� ���̳ʽ��� ������ ���� - int���� ������ ����� ������
	

	unsigned int x = 2999999999;
	cout << "x= " << x << endl; //�� ��쿡�� �״�� ���

	int someInteger = 256;
	short someShort;
	long someLong;
	float someFloat;
	double someDouble;

	someInteger++; //256 + 1 (integer = 256)
	someInteger *= 2; //257 * 2 = 514
	someShort = static_cast<short>(someInteger); // 514 (short�� someinteger����)
	someLong = someShort * 10000; // 514 * 10000
	someFloat = someLong + 0.785f; // 5140000+0.785 ���� �ִ� 7�ڸ� ���ڸ� ��Ÿ�� �� �ִ�
	someDouble = static_cast<double>(someFloat) / 100000; //51.4000785 
	cout << someDouble << endl; //51.4 someDouble

	int firstNum = 0;
	cout << "first Number:";
	cin >> firstNum;
	int secondNum = 0;
	cout << "second Number:";
	cin >> secondNum;
	
	cout << "Sum:" <<firstNum + secondNum << endl;

	const int a = 0; //const(���)�� �ѹ� �������� ���� �Ұ���
	constexpr int b = fac(4);
	
	
}

*/
