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
    for(int outer=1 ; outer <= num/2; outer++){
        for(int spacing=num/2; spacing > outer; spacing--){
                cout << " " ;
            }    
        for(int inner=1; inner <= outer; inner++){   
            cout << "*";    
        }
         cout <<endl;
    }
    for(int outer=(num/2) ; outer >=1; outer--){
        for(int spacing=num/2; spacing > outer; spacing--){
                cout << " " ;
            }    
        for(int inner=1; inner <= outer; inner++){           
            cout << "*" ;
        }
        cout << endl;
    }
}