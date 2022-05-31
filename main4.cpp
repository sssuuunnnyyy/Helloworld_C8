#include <iostream>

using namespace std;

/*
enum PieceType1 {PieceTypeKing=1, PieceTypeQueen, PieceTypeRook=10, PieceTypePawn}; //차례대로 1,2,10,11 이렇게 진행, 숫자를 안쓰면 0부터 시작

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
	//myPiece = PieceTypeKing; //숫자를 지정하면 안되고 명확하게 enum PieceType에 있는 항목 중 하나를 넣어줘야 함

	PieceType myPiece2 = PieceType::King;
	//int b = myPiece2; //Enum Class는 타입을 변경할 수 없다.
	*/

	//직원 레코드 생성 및 값 채우기
	Employee anEmployee;
	anEmployee.firstInitial = 'M';
	anEmployee.lastInitial = 'G';
	anEmployee.employeeNumber = 42;
	anEmployee.salary = 80000;
	//직원 레코드에 저장된 값 출력하기
	cout << "Employee: " << anEmployee.firstInitial << anEmployee.lastInitial << endl;
	cout << "Number: " << anEmployee.employeeNumber << endl;
	cout << "Salary: $" << anEmployee.salary << endl;
	return 0;
}