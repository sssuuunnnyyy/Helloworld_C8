/*#include<iostream>

using namespace std;

namespace myNS1 { int n = 10; }
namespace myNS2 { int n = 20; }
int n = 30; //��������

int main(int argc, char* argv[])
{
	int n = 40; //main ������ ��������

	cout << myNS1::n << std::endl;
	cout << myNS2::n << std::endl;
	cout << ::n << std::endl;
	cout << n << std::endl;

	float myFloat = 3.14f;
	int i1 = (int)myFloat; //����õ
	int i2 = int(myFloat); //����õ
	int i3 = static_cast<int>(myFloat); //��Ȯ�� ����ȯ ���

	double d1 = 1200.;
	double d2 = 1200.0;
	double d3 = 12e2; // 12 * 10^2
	double d4 = 1.2e+3; //1.2*10^3
	double d5 = 1.2e-3; //1.2*10^-3


	cout << d1 << " " << d2 << " " << d3 << " " << d4 << endl;
}

*/