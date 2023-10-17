#include<iostream>
#include<cmath>
using namespace std;

string checkPointPosition(int h, int x, int y);

main()
{   
    int h, x, y;

    cout << "Enter height: ";
    cin >> h;
    cout << "Enter x coordinate: ";
    cin >> x;
    cout << "Enter y coordinate: ";
    cin >> y;
    
    string result = checkPointPosition(h, x, y);
    cout << result ;
}

string checkPointPosition(int h, int x, int y)
{
    string position;
    if((x < 2*h && x > h && y < 4*h) || (y < 3*h && x < h)){
        position = "Inside";
    }
    else if((x <= 2*h && x >= h && y == 4*h) || (x == 2*h && y <= 4*h && y >= h) || (x == h && y <= 4*h && y >= h) || (x <= 3*h && y == h) || (x == 3*h && y <= h) ){
        position = "Border";
    }
    else {
        position = "Outside";
    }
    return position;
}
