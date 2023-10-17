#include<iostream>
#include <windows.h>
using namespace std;

void gotoxy(int x, int y);
char getCharAtxy(short int x, short int y);
void printHeader();
void printMaze();
void printPlayer();
void printEnemy1();
void eraseEnemy1();
void moveEnemy1();
void printEnemy2();
void eraseEnemy2();
void moveEnemy2();
void printEnemy4();
void eraseEnemy4();
void moveEnemy4();
void printEnemy3();
void eraseEnemy3();
void moveEnemy3();
void movePlayerRight();
void movePlayerLeft();
void movePlayerUp();
void movePlayerDown();
void printCharge();
string changeDirection2();
string changeDirection1();
string changeDirection3();

string direction2 = "left";
string direction1 = "down";
string direction3 = "right";
int px = 9,py = 32;
int ex1 = 10, ey1 = 1;
int ex2 = 80, ey2 = 37;
int ex3 = 66, ey3 = 22;
int ex4 = 25, ey4 = 37;
int score = 0;

main()
{
    system("cls");
    printHeader();
    printMaze();
    printPlayer();
    printEnemy1();
    printEnemy2();
    printEnemy3();
    printCharge();
    //printEnemy4();
    while(true){
    direction2 = changeDirection2();
    direction1 = changeDirection1();
    direction3 = changeDirection3();
    moveEnemy1();
    moveEnemy3();
    moveEnemy2();
    //moveEnemy4();
    Sleep(100);
        if(GetAsyncKeyState(VK_RIGHT)){
    movePlayerRight();
    }
    if(GetAsyncKeyState(VK_LEFT)){
        movePlayerLeft();
    }
    if(GetAsyncKeyState(VK_UP)){
        movePlayerUp();
    }
    if(GetAsyncKeyState(VK_DOWN)){
        movePlayerDown();
    }
    }
    
}

void printHeader()
{
    int x = 124,y = 8;
    gotoxy(x+3,y);
    cout << "#####  #### #####  #### ##   "<<endl;
    gotoxy(x+3,y+1);
    cout << "##  ## ##   ##  ## ##   ##   "<<endl;
    gotoxy(x+3,y+2);
    cout << "#####  #### #####  #### ##   "<<endl;
    gotoxy(x+3,y+3);
    cout << "##  ## ##   ##  ## ##   ##    "<<endl;
    gotoxy(x+3,y+4);
    cout << "##  ## #### #####  #### ##### "<<endl;

    gotoxy(x,y+6);
    cout << "##    ## ## ## #### #### ##    #####"<<endl;
    gotoxy(x,y+7);
    cout << "##    ## ## ## ##   ##   ##    ##    "<<endl;
    gotoxy(x,y+8);
    cout << "## ## ## ##### #### #### ##    #####"<<endl;
    gotoxy(x,y+9);
    cout << "######## ## ## ##   ##   ##       ##"<<endl;
    gotoxy(x,y+10);
    cout << "###  ### ## ## #### #### ##### #####"<<endl;

    gotoxy(x,y+11);
    cout << "------------------------------------"<<endl;
    gotoxy(x,y+12);
    cout << "             CAR COMBAT             "<<endl;
    gotoxy(x,y+13);
    cout << "------------------------------------"<<endl;

    gotoxy(129, 26);
    cout << "      To move left       ";
    gotoxy(129, 27);
    cout << "PRESS the LEFT ARROW KEY.";
    gotoxy(129, 29);
    cout << "     To move right        ";
    gotoxy(129, 30);
    cout << "PRESS the RIGHT ARROW KEY.";

    gotoxy(126, 33);
    cout << "---------------------------------";
    gotoxy(126, 34);
    cout << "| SCORE :                       |";
    gotoxy(126, 35);
    cout << "---------------------------------";
    gotoxy(137,34);
    cout << score;
}

void printMaze()
{
    int y=1;
    gotoxy(0,0);
    cout << "################################################################################################################  ||" << endl;

    while(y<42){
    gotoxy(0,y);
    cout << "#                                                                                                              #  ||" << endl;
    y=y+1;
    }
    gotoxy(0,42);
    cout << "################################################################################################################  ||" << endl;

    
}


void printPlayer()
{
    gotoxy(px,py);
    cout << "  .-----."<<endl;
    gotoxy(px,py+1);
    cout << " ('     ')"<<endl;
    gotoxy(px,py+2);
    cout << " | _____ |"<<endl;
    gotoxy(px,py+3);
    cout << " ||\\___/||"<<endl;
    gotoxy(px,py+4);
    cout << "/|||   |||\\"<<endl;
    gotoxy(px,py+5);
    cout << " |||___|||"<<endl;
    gotoxy(px,py+6);
    cout << " ||/___\\||"<<endl;
    gotoxy(px,py+7);
    cout << " (.     .)"<<endl;
    gotoxy(px,py+8);
    cout << "  '-----'"<<endl;
}

void erasePlayer()
{
    gotoxy(px,py);
    cout << "         "<<endl;
    gotoxy(px,py+1);
    cout << "          "<<endl;
    gotoxy(px,py+2);
    cout << "          "<<endl;
    gotoxy(px,py+3);
    cout << "           "<<endl;
    gotoxy(px,py+4);
    cout << "            "<<endl;
    gotoxy(px,py+5);
    cout << "          "<<endl;
    gotoxy(px,py+6);
    cout << "           "<<endl;
    gotoxy(px,py+7);
    cout << "          "<<endl;
    gotoxy(px,py+8);
    cout << "         "<<endl;
}

void movePlayerRight()
{

    erasePlayer();
    px = px + 1;
    if(px == 100){
        px = 99;
    }
    printPlayer();

    if((getCharAtxy(px+10,py) == '$') || (getCharAtxy(px+10,py+1) == '$') || (getCharAtxy(px+10,py+2) == '$') || (getCharAtxy(px+10,py+3) == '$') || (getCharAtxy(px+11,py+4) == '$') || (getCharAtxy(px+10,py+5) == '$') || (getCharAtxy(px+10,py+6) == '$') || (getCharAtxy(px+10,py+7) == '$') || (getCharAtxy(px+10,py+8) == '$') ){
        score = score + 1;
        gotoxy(137,34);
        cout << score;
    }
}

void movePlayerLeft()
{

    erasePlayer();
    px = px - 1;
    if(px == 0){
        px = 1;
    }
    printPlayer();

    if((getCharAtxy(px-1,py) == '$') || (getCharAtxy(px-1,py+1) == '$') || (getCharAtxy(px-1,py+2) == '$') || (getCharAtxy(px-1,py+3) == '$') || (getCharAtxy(px-2,py+4) == '$') || (getCharAtxy(px-1,py+5) == '$') || (getCharAtxy(px-1,py+6) == '$') || (getCharAtxy(px-1,py+7) == '$') || (getCharAtxy(px-1,py+8) == '$') ){
       score = score + 1;
       gotoxy(137,34);
       cout << score;
    }

}

void movePlayerUp()
{

    erasePlayer();
    py = py - 1;
    if(py == 0){
        py = 1;
    }
    printPlayer();

    if((getCharAtxy(px,py-1) == '$') || (getCharAtxy(px+1,py-1) == '$') || (getCharAtxy(px+2,py-1) == '$') || (getCharAtxy(px+3,py-1) == '$') || (getCharAtxy(px+4,py-1) == '$') || (getCharAtxy(px+5,py-1) == '$') || (getCharAtxy(px+6,py-1) == '$') || (getCharAtxy(px+7,py-1) == '$') || (getCharAtxy(px+8,py-1) == '$')){
       score = score + 1;
       gotoxy(137,34);
       cout << score;
    }
}
void movePlayerDown()
{

    erasePlayer();
    py = py + 1;
    if(py == 34){
        py = 33;
    }
    printPlayer();
    
    if((getCharAtxy(px,py+9) == '$') || (getCharAtxy(px+1,py+9) == '$') || (getCharAtxy(px+2,py+9) == '$') || (getCharAtxy(px+3,py+9) == '$') || (getCharAtxy(px+4,py+9) == '$') || (getCharAtxy(px+5,py+9) == '$') || (getCharAtxy(px+6,py+9) == '$') || (getCharAtxy(px+7,py+9) == '$') || (getCharAtxy(px+8,py+9) == '$')){
       score = score + 1;
       gotoxy(137,34);
       cout << score;
    }
}

void printEnemy1()
{
    
    gotoxy(ex1, ey1);
    cout << "  ______" << endl ;
    gotoxy(ex1, ey1+1);
    cout << "(| ____ |)" << endl ;
    gotoxy(ex1, ey1+2);
    cout << " || \\/ ||" << endl ;
    gotoxy(ex1, ey1+3);
    cout << " ||_/\\_||" << endl ;
    gotoxy(ex1, ey1+4);
    cout << "(|______|)" << endl ;
    gotoxy(ex1, ey1+5);
    cout << "   ----" << endl ;
}

void eraseEnemy1()
{
    gotoxy(ex1, ey1);
    cout << "          " << endl ;
    gotoxy(ex1, ey1+1);
    cout << "            " << endl ;
    gotoxy(ex1, ey1+2);
    cout << "            " << endl ;
    gotoxy(ex1, ey1+3);
    cout << "            " << endl ;
    gotoxy(ex1, ey1+4);
    cout << "            " << endl ;
    gotoxy(ex1, ey1+5);
    cout << "          " << endl ;
    gotoxy(ex1, ey1+6);
    cout << "         " << endl ;
}

void moveEnemy1()
{
    eraseEnemy1();
    if(direction1 == "down"){
        ey1 = ey1 + 1;
    }
    else if(direction1 == "up"){
        ey1 = ey1 - 1;
    }
    printEnemy1();
}

void printEnemy2(){
    gotoxy(ex2,ey2);
    cout << "           .______." << endl;
    gotoxy(ex2,ey2+1);
    cout << "  ..______/'------'\\" << endl;
    gotoxy(ex2,ey2+2);
    cout << "  ||_____/__________\\" << endl;   
    gotoxy(ex2,ey2+3);
    cout << "        (.  O  O  O .)" << endl;
    gotoxy(ex2,ey2+4);
    cout << "         '----------'" << endl;

}

void eraseEnemy2(){
    gotoxy(ex2,ey2);
    cout << "                   " << endl;
    gotoxy(ex2,ey2+1);
    cout << "                     " << endl;
    gotoxy(ex2,ey2+2);
    cout << "                      " << endl;   
    gotoxy(ex2,ey2+3);
    cout << "                      " << endl;
    gotoxy(ex2,ey2+4);
    cout << "                     " << endl;
}

void moveEnemy2()
{
    eraseEnemy2();
    if(direction2 == "left"){    
        ex2 = ex2 - 1;
        //printEnemy2();
        //ex4 == 30;
    }
    else if(direction2 == "right"){
       // eraseEnemy4();
        //ex4 = ex4 + 1;
        //printEnemy4();
        ex2 = ex2 + 1;
        //ex2 = 80;
    }
    printEnemy2();
}

void printEnemy3()
{
    gotoxy(ex3,ey3);
    cout << "       -------_-------" << endl;
    gotoxy(ex3,ey3+1);
    cout << "           __|_|__         \\" << endl;
    gotoxy(ex3,ey3+2);
    cout << "          / |     \\_____----\\---" << endl;
    gotoxy(ex3,ey3+3);
    cout << "         {__/     |________/ \\" << endl;
    gotoxy(ex3,ey3+4);
    cout << "         \\________/" << endl;
    gotoxy(ex3,ey3+5);
    cout << "        \\__|__|____" << endl;
}

void eraseEnemy3()
{
    gotoxy(ex3,ey3);
    cout << "                      " << endl;
    gotoxy(ex3,ey3+1);
    cout << "                             " << endl;
    gotoxy(ex3,ey3+2);
    cout << "                                  " << endl;
    gotoxy(ex3,ey3+3);
    cout << "                               " << endl;
    gotoxy(ex3,ey3+4);
    cout << "                    " << endl;
    gotoxy(ex3,ey3+5);
    cout << "                    " << endl;
}

void moveEnemy3()
{
    eraseEnemy3();
    if(direction3 == "right"){
        ex3 = ex3 - 1;
        ey3 = ey3 - 1;
    }
    else if(direction3 == "left"){
        ex3 = ex3 + 1;
        ey3 = ey3 + 1;
    }
    printEnemy3();
    Sleep(50);

}

void printEnemy4()
{
    gotoxy(ex4,ey4);
    cout << "   .______." << endl;
    gotoxy(ex4,ey4+1);
    cout << "  /'------'\\______.." << endl;
    gotoxy(ex4,ey4+2);
    cout << " /__________\\_____||" << endl;   
    gotoxy(ex4,ey4+3);
    cout << "(.  O  O  O .)" << endl;
    gotoxy(ex4,ey4+4);
    cout << " '----------'" << endl;
}

void eraseEnemy4()
{
    gotoxy(ex4,ey4);
    cout << "           " << endl;
    gotoxy(ex4,ey4+1);
    cout << "                     " << endl;
    gotoxy(ex4,ey4+2);
    cout << "                     " << endl;   
    gotoxy(ex4,ey4+3);
    cout << "              " << endl;
    gotoxy(ex4,ey4+4);
    cout << "             " << endl;
}

void moveEnemy4()
{
    eraseEnemy4();
    ex4 = ex4 + 1;
    printEnemy4();
}


void printCharge()
{
    gotoxy(50,20);
    cout << "|$|";

    gotoxy(95,5);
    cout << "|$|";

    gotoxy(5,3);
    cout << "|$|";

    gotoxy(100,28);
    cout << "|$|";

    gotoxy(106,40);
    cout << "|$|";

    gotoxy(5,26);
    cout << "|$|";

 
}
void gotoxy(int x, int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

char getCharAtxy(short int x, short int y)
{
    CHAR_INFO ci;
    COORD xy = {0, 0};
    SMALL_RECT rect = {x, y, x, y};
    COORD coordBufSize;
    coordBufSize.X = 1;
    coordBufSize.Y = 1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar: ' ';
}

string changeDirection2()
{

    if(ex2 == 30 ){
        direction2 = "right";
    }
    if(ex2 == 80){
        direction2 = "left";
    }
    /*if(ex4 == 80){
        direction2 = "left";
    }*/
    return direction2;
}

string changeDirection1()
{
    if(ey1 == 35 ){
        direction1 = "up";
    }
    if(ey1 == 1){
        direction1 = "down";
    }
    return direction1;
}

string changeDirection3()
{
    if(ey3 ==  22){
        direction3 = "right";
    }
    if(ey3 == 1){
        direction3 = "left";
    }
    return direction3;
}
