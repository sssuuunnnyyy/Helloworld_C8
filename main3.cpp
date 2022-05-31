/*
#include <iostream>

using namespace std;

constexpr int fac(int n) {
	return n > 1 ? n * fac(n - 1) : 1;
} //

int main()
{
	
	//int x = 2999999999;
	//cout << "x = " << x << endl; //x가 마이너스가 나오는 이유 - int값의 범위를 벗어나기 때문에
	

	unsigned int x = 2999999999;
	cout << "x= " << x << endl; //이 경우에는 그대로 출력

	int someInteger = 256;
	short someShort;
	long someLong;
	float someFloat;
	double someDouble;

	someInteger++; //256 + 1 (integer = 256)
	someInteger *= 2; //257 * 2 = 514
	someShort = static_cast<short>(someInteger); // 514 (short에 someinteger들어간것)
	someLong = someShort * 10000; // 514 * 10000
	someFloat = someLong + 0.785f; // 5140000+0.785 에서 최대 7자리 숫자만 나타날 수 있다
	someDouble = static_cast<double>(someFloat) / 100000; //51.4000785 
	cout << someDouble << endl; //51.4 someDouble

	int firstNum = 0;
	cout << "first Number:";
	cin >> firstNum;
	int secondNum = 0;
	cout << "second Number:";
	cin >> secondNum;
	
	cout << "Sum:" <<firstNum + secondNum << endl;

	const int a = 0; //const(상수)는 한번 정해지면 수정 불가능
	constexpr int b = fac(4);
	
	
}

*/
