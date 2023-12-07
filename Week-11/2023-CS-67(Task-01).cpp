#include <iostream>
#include <Windows.h>
using namespace std;

//  Funtion printing the Game Board  //
void printBoard();                  //
/////////////////////////////////////


// Function moving enemies in different directions //
void moveEnemy(char object, string direction);    //
///////////////////////////////////////////////////


// Functions moving the Player 'P' Right and Left //
void movePlayerRight();                          //
void movePlayerLeft();                          //
/////////////////////////////////////////////////


// Firing Mechanism /////////////////////
void fire();                          //
void moveFire(int timeStep);         //
//////////////////////////////////////


// Game Board //////////////////////////////////////////////////// 
                                                                //
char board[23][53] = {                                          //
    "####################################################",     //
    "#                                                  #",     //
    "#                                                  #",     //
    "#                                                  #",     //
    "#                                                  #",     //
    "#             e                                    #",     //
    "#                                                  #",     //
    "#                                                  #",     //
    "#                          e                       #",     //
    "#                                                  #",     //
    "#                                                  #",     //
    "#       x                                          #",     //
    "#                                                  #",     //
    "#                                                  #",     //
    "#                                                  #",     //
    "#                                                i #",     //
    "#                                                  #",     //
    "#                                                  #",     //
    "#                                                  #",     //
    "#                          P                       #",     //
    "#                                                  #",     //
    "#                                                  #",     //
    "####################################################",     //
};                                                              //
//////////////////////////////////////////////////////////////////


int ROW[50];  // Array storing rows containing similar enemies
int COL[50]; // Array storing columns containing similar enemies

main()
{
    system("cls"); // Clearing Screen
    printBoard(); // Printing Board

    while (true)
    {
        if (GetAsyncKeyState(VK_RIGHT))
        {
            movePlayerRight(); // Moving Player Right if Right Arrow Key is pressed
        }
        if (GetAsyncKeyState(VK_LEFT))
        {
            movePlayerLeft(); // Moving Player Left if Left Arrow Key is pressed
        }
        if (GetAsyncKeyState(VK_SPACE))
        {
            fire(); // Creating Fire
        }
        
        moveFire(1);                    // Moving the fire
        moveEnemy('e', "right");        // Moving enemy 'e' towards right
        moveEnemy('x', "down");         // Moving enemy 'x' downwards
        moveEnemy('i', "diagonal-up");  // Moving enemy 'i' diagonally-up
        system("cls");                  // Clearing Screen
        printBoard();                   // Printing Board
        Sleep(100);
    }
}

// Function printing the Game Board //////////////////
void printBoard()                                  //
{                                                 //
    for (int row = 0; row < 23; row++)           //
    {                                           //
        for (int col = 0; col < 53; col++)     //
        {                                     //
            cout << board[row][col];         //
        }                                   //
        cout << endl;                      //
    }                                     //
}                                        //
//////////////////////////////////////////


/////////////////////////// Function moving enemies in different directions ///////////////////////////

void moveEnemy(char object, string direction)
{
    int index = 0;
    for (int row = 0; row < 23; row++)
    {
        for (int col = 0; col < 53; col++)
        {
            if (board[row][col] == object)
            {
                ROW[index] = row;   // Storing the row (where object is found) in the Array
                COL[index] = col;  // Storing the column (where object is found) in the Array
                index++;
            }
        }
    }

    for (int x = 0; x < index; x++)
    {
        board[ROW[x]][COL[x]] = ' ';

        //  If direction is Right
        if (direction == "right")
        {
            COL[x] = COL[x] + 1;
            if (COL[x] == 50)
            {
                COL[x] = 1;
            }
        }
        //  If direction is Left
        else if (direction == "left")
        {
            COL[x] = COL[x] - 1;
            if (COL[x] == 1)
            {
                COL[x] = 50;
            }
        }
        //  If direction is Up
        else if (direction == "up")
        {
            ROW[x] = ROW[x] - 1;
            if (ROW[x] == 1)
            {
                ROW[x] = 20;
            }
        }
        //  If direction is Down
        else if (direction == "down")
        {
            ROW[x] = ROW[x] + 1;
            if (ROW[x] == 20)
            {
                ROW[x] = 1;
            }
        }
        //  If direction is Diagonally-Up
        else if (direction == "diagonal-up")
        {
            COL[x] = COL[x] - 1;
            ROW[x] = ROW[x] - 1;
            if (ROW[x] == 1)
            {
                ROW[x] = 15;
                COL[x] = 50;
            }
        }
        //  If direction is Diagonally-Down
        else if (direction == "diagonal-down")
        {
            COL[x] = COL[x] + 1;
            ROW[x] = ROW[x] + 1;
            if (COL[x] == 50)
            {
                COL[x] = 1;
                ROW[x] = 1;
            }
        }
        board[ROW[x]][COL[x]] = object;
        Sleep(10);
    }
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////// Funtions For The Player ///////////////////////////////////////////

// Funtion moving the Player 'P' towards Right
void movePlayerRight()
{
    for (int row = 0; row < 23; row++)
    {
        for (int col = 0; col < 53; col++)
        {
            if (board[row][col] == 'P')
            {
                board[row][col] = ' ';
                col = col + 1;
                if (col == 50)
                {
                    col = 49;
                }
                board[row][col] = 'P';
            }
        }
    }
}

// Funtion moving the Player 'P' towards Left
void movePlayerLeft()
{
    for (int row = 0; row < 23; row++)
    {
        for (int col = 0; col < 53; col++)
        {
            if (board[row][col] == 'P')
            {
                board[row][col] = ' ';
                col = col - 1;
                if (col == 1)
                {
                    col = 2;
                }
                board[row][col] = 'P';
            }
        }
    }
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////// Funtions For Firing Mechanism /////////////////////////////////////

// Funtion creating the Fire
void fire()
{
    for (int row = 0; row < 23; row++)
    {
        for (int col = 0; col < 53; col++)
        {
            if (board[row][col] == 'P')
            {
              board[row - 1][col] = '*';
            }
        }
    }

    
}

// Funtion moving the fire
void moveFire(int timeStep)
{
    for (int time = 0; time < timeStep; time++)
    {
        for (int row = 0; row < 23; row++)
        {
            for (int col = 0; col < 53; col++)
            {
                if (board[row][col] == '*')
                {
                    board[row][col] = ' ';
                    if (row == 1)
                    {
                        break;
                    }
                    board[row - 1][col] = '*';
                }
            }
        }
    }
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////