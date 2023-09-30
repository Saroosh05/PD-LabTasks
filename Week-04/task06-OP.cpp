#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int x, int y);
void H();
void A();
void S();
void S2();
void A2();
void N();

main()
{
	system("cls");

	H();
	A();
	S();
	S2();
	A2();
	N();

}
void gotoxy(int x, int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void H()
{
	gotoxy(4,0);
	cout << "H";
}
void A()
{
	gotoxy(4,1);
	cout << "A";
}
void S()
{
	gotoxy(4,2);
	cout << "S";
}
void S2()
{
	gotoxy(4,3);
	cout << "S";
}
void A2()
{
	gotoxy(4,4);
	cout << "A";
}
void N()
{
	gotoxy(4,5);
	cout << "N";
}