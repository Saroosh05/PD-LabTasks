#include<iostream>
#include <windows.h>
using namespace std;

void amplify(int num);

main()
{
    int num;
    cout << "Enter the number to Amplify: ";
    cin >> num;
    
    amplify(num);
}

void amplify(int num)
{ 
    int sequence = 1,seq;
    cout << sequence; 
    for(int start=1; start<num; start++){
        sequence += 1;
        if(sequence%4 == 0){
            seq = sequence*10;
            cout << ", " << seq;
            continue;
        }
        cout << ", " << sequence ;
    }
}