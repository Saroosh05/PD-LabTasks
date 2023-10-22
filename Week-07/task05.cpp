#include<iostream>
#include <windows.h>
using namespace std;

bool isPrime(int number);

main()
{
    int number;
    cout << "Enter Number: ";
    cin >> number;
    
    bool result = isPrime(number);
    cout << result;
}

bool isPrime(int number)
{   
    int y =0;
    for(int x=1 ; x <= number; x++){ 
    if((number% x) == 0 ){
        y++;
    }
    }

    if(y == 2){
        return true;
    }
    else{
      return false;
    }
}

