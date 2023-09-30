#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int, int);
void printMenu();
void calculateAggregate(string name,int matricMarks,int interMarks,int ecatMarks);
void compareMarks(string nameStd1,int ecatMarksStd1,string nameStd2,int ecatMarksStd2, int x, int y);


main()
{
	system("cls");
	string name,nameStd1, nameStd2;
	float matricMarks, interMarks, ecatMarks;
	int choice, ecatMarksStd1, ecatMarksStd2;
	int x = 30, y = 23;
	printMenu();

		gotoxy(62,20);
	while(true){

		cout <<"Enter your requirement (1 or 2): ";
		cin >> choice;


		if (choice == 1){	
			gotoxy(x,y);
     			cout << "Enter the student's name: ";
			cin >> name;
			gotoxy(x,y+1);
			cout << "Enter matriculation marks (out of 1100): ";
			cin >> matricMarks;
			gotoxy(x,y+2);
			cout << "Enter intermediate marks (out of 550): ";
			cin >> interMarks;
			gotoxy(x,y+3);
			cout << "Enter Ecat marks (out of 400): ";
			cin >> ecatMarks;
			gotoxy(x,y+5);
			calculateAggregate(name, matricMarks, interMarks,ecatMarks);
			y = y	+ 11;
			gotoxy(62,y-3);
		}

		if(choice == 2){
			gotoxy(x,y);
			cout << "Enter the first student's name: ";
			cin >> nameStd1;
			gotoxy(x,y+1);
			cout << "Enter ECAT marks of the first student: ";
			cin >> ecatMarksStd1;
			gotoxy(x,y+2);
			cout << "Enter the second student's name: ";
			cin >> nameStd2;
			gotoxy(x,y+3);
			cout << "Enter ECAT marks of the second student: ";
			cin >> ecatMarksStd2;
			gotoxy(x,y+5);
			compareMarks(nameStd1, ecatMarksStd1, nameStd2, ecatMarksStd2 ,x,y);
			y = y	+ 11;
			gotoxy(62,y-2);	
		}

	}
}


void printMenu()
{
 gotoxy(9,4);
 cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
 gotoxy(9,5); 
 cout << "|        ##   ##  ###   ## ## ##      ## ##### #####   ##### ## ###### ##    ##      ####  ######  ##     ## ## ##### ##### ## ###### ###   ##      |"<<endl;
 gotoxy(9,6);
 cout << "|        ##   ##  ####  ## ##  ##    ##  ##    ##  ##  ##    ##   ##    ##  ##      ##  ##  ##  ## #### #### ## ##    ##    ## ##  ## ####  ##      |"<<endl;
 gotoxy(9,7);
 cout << "|        ##   ##  ## ## ## ##   ##  ##   ##### #####   ##### ##   ##      ##        ##  ##  ##  ## ## ##  ## ## ##### ##### ## ##  ## ## ## ##      |"<<endl;
 gotoxy(9,8);
 cout << "|        ##   ##  ##  #### ##    ####    ##    ##  ##     ## ##   ##      ##        ######  ##  ## ##     ## ##    ##    ## ## ##  ## ##  ####      |"<<endl;
 gotoxy(9,9);
 cout << "|          ###    ##   ### ##     ##     ##### ##   ## ##### ##   ##      ##        ##  ## #####   ##     ## ## ##### ##### ## ###### ##   ###      |"<<endl;
 gotoxy(9,10);
 cout << "|                                                                                                                                                   |"<<endl;
 gotoxy(9,11);
 cout << "|           ##     ##  ####  ###   ##  ####   ####  ##### ##     ## ##### ###   ## ######    ##### ##    ## ##### ###### ##### ##     ##            |"<<endl;
 gotoxy(9,12);
 cout << "|           #### #### ##  ## ####  ## ##  ## ##     ##    #### #### ##    ####  ##   ##      ##     ##  ##  ##      ##   ##    #### ####            |"<<endl;
 gotoxy(9,13);
 cout << "|           ## ##  ## ##  ## ## ## ## ##  ## ## ### ##### ## ##  ## ##### ## ## ##   ##      #####    ##    #####   ##   ##### ## ##  ##            |"<<endl;
 gotoxy(9,14);
 cout << "|           ##     ## ###### ##  #### ###### ##  ## ##    ##     ## ##    ##  ####   ##         ##    ##       ##   ##   ##    ##     ##            |"<<endl;
 gotoxy(9,15);
 cout << "|           ##     ## ##  ## ##   ### ##  ##  ####  ##### ##     ## ##### ##   ###   ##      #####    ##    #####   ##   ##### ##     ##            |"<<endl;
 gotoxy(9,16);
 cout << "---------------------------------------------------------------------------------------------------------------------------------------------------- "<<endl;    
 cout << endl;
 gotoxy(50,18);
 cout << "1- Calculation of Aggregate";
 gotoxy(89,18);
 cout << "2- Comparing Marks" <<endl;


 

}

void calculateAggregate(string name,int matricMarks,int interMarks,int ecatMarks)
{
	float merit = (((ecatMarks/400)*0.4) + ((interMarks/550)*0.3) + ((matricMarks/1100)*0.3))*100;
	cout << "Aggregate score for " << name << " in UET is: " << merit << "%" <<endl;
}

void compareMarks(string nameStd1,int ecatMarksStd1,string nameStd2,int ecatMarksStd2,int x, int y)
{
	if(ecatMarksStd1 > ecatMarksStd2){
		cout << nameStd1 << " has higher marks in ECAT than " << nameStd2 << "."<<endl ;
		gotoxy(x,y+6);
		cout << nameStd1 << " has roll number 1." <<endl ;
		gotoxy(x,y+7);
		cout <<nameStd2 << " has roll number 2." <<endl  ;
	}
	if(ecatMarksStd1 < ecatMarksStd2){
		cout << nameStd2 << " has higher marks in ECAT than " << nameStd2 << "." <<endl;
		gotoxy(x,y+6);
		cout << nameStd2 << " has roll number 1." <<endl;
		gotoxy(x,y+7);
		cout << nameStd1 << " has roll number 2." <<endl;
	}
	if(ecatMarksStd1 == ecatMarksStd2){
		cout << nameStd1 << " has same marks in ECAT as " << nameStd2 << "." <<endl;
		gotoxy(x,y+6);
		cout << nameStd1 << " has roll number 1." <<endl;
		gotoxy(x,y+7);
		cout << nameStd2 << " has roll number 2." <<endl;


	}
}

void gotoxy(int x, int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
