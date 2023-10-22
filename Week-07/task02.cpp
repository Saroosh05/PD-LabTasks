#include<iostream>
#include <windows.h>
using namespace std;

void gotoxy(int x, int y);
void triangle(int num);

main()
{
    system("cls");
    int num;
    cout << "Enter desired number of rows: ";
    cin >> num;
    
    triangle(num);
}

void triangle(int num)
{  
    int x = (num/2)-1;
    int y = 1;
    for(int outer=(num/2) ; outer >=1; outer--){
        gotoxy(x,y);
        for(int inner=num/2; inner >= outer; inner--){           
            cout << "*" ;
        }
        x--;
        y++;    
    }
    int x2 = 0;
    for(int outer=(num/2) ; outer >=1; outer--){
        gotoxy(x2,y);
        for(int inner=1; inner <= outer; inner++){           
            cout << "*" ;
        }
        x2++;
        y++;    
    }
}

void gotoxy(int x, int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}