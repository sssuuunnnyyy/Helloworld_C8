#include <iostream>

using namespace std;

/*
enum PieceType1 {PieceTypeKing=1, PieceTypeQueen, PieceTypeRook=10, PieceTypePawn}; //���ʴ�� 1,2,10,11 �̷��� ����, ���ڸ� �Ⱦ��� 0���� ����

enum class PieceType : unsigned long{
	King = 1,
	Queen,
	Rook = 10,
	Pawn
};

int main()
{
	PieceType1 myPiece = PieceTypeRook;
	int a = myPiece;
	//myPiece = PieceTypeKing; //���ڸ� �����ϸ� �ȵǰ� ��Ȯ�ϰ� enum PieceType�� �ִ� �׸� �� �ϳ��� �־���� ��

	PieceType myPiece2 = PieceType::King;
	//int b = myPiece2; //Enum Class�� Ÿ���� ������ �� ����.
	*/

	//���� ���ڵ� ���� �� �� ä���
	Employee anEmployee;
	anEmployee.firstInitial = 'M';
	anEmployee.lastInitial = 'G';
	anEmployee.employeeNumber = 42;
	anEmployee.salary = 80000;
	//���� ���ڵ忡 ����� �� ����ϱ�
	cout << "Employee: " << anEmployee.firstInitial << anEmployee.lastInitial << endl;
	cout << "Number: " << anEmployee.employeeNumber << endl;
	cout << "Salary: $" << anEmployee.salary << endl;
	return 0;
}