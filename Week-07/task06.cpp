#include<iostream>
#include <windows.h>
using namespace std;

int Primorial(int number);

main()
{
    int number;
    cout << "Enter Number: ";
    cin >> number;
    
    int result = Primorial(number);
    cout << result;
}

int Primorial(int number)
{   
    int primes = 1,product = 1,x = 1;
    while(x <= number){ 
        int y =0;
        for(int i= 1; i <= primes; i++){
            if((primes % i) == 0 ){
             y++;
             
            }
        }
        if(y==2){
        product *= primes;
        x++;
        }
        primes ++;
        
    }
    return product;
}

