#include<iostream>
using namespace std;

void triangle(int num);

main()
{
    int num;
    cout << "Enter desired number of rows: ";
    cin >> num;
    
    triangle(num);
}

void triangle(int num)
{  
    for(int outer=num ; outer >=1; outer--){
        for(int inner=num; inner >= outer; inner--){
            cout << "*" ;
        }
        cout << endl;
    }
}