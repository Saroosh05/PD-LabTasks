#include<iostream>
#include <windows.h>
using namespace std;

int dots(int num);

main()
{
    int num;
    cout << "Enter number of Triangle: ";
    cin >> num;
    
    int result = dots(num);
    cout << "Dots in the Triangle: " <<result;
}

int dots(int num)
{ 
    int ans,i=0,no_dots=0;

    for(int x=1; x<=num; x++){
        i++;
        ans = no_dots + i;
        no_dots = ans;
    }
    return ans;
}