#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int, int);
void printMaze();
void movePlayer(int, int);


main()
{
	system("cls");
	printMaze();
	int x = 4, y = 4;
	while (true)
	{
		movePlayer(x, y);
		x = x + 1;
		if(x == 20)
		{
		x = 4;
		}
	}
	gotoxy(0, 10);
}

void movePlayer(int x, int y)
{
	gotoxy(x,y);
	cout << "P";
	Sleep(100);
	gotoxy(x,y);
	cout << " ";
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