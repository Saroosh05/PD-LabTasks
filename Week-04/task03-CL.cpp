#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int, int);
void printMaze();


main()
{
	system("cls");
	printMaze();
	gotoxy(4,4);
	cout << "P";
	gotoxy(0,8);

}

void gotoxy(int x, int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void printMaze()
{
	cout << "#######################" <<endl;
	cout << "#                     #" <<endl;
	cout << "#                     #" <<endl;
	cout << "#                     #" <<endl;
	cout << "#                     #" <<endl;
	cout << "#                     #" <<endl;
	cout << "#                     #" <<endl;
	cout << "#                     #" <<endl;
	cout << "#######################" <<endl;
}