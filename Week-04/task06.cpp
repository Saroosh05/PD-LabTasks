#include <iostream>
using namespace std;

void time(int hr, int min);


main()
{
	int hr, min;

	cout << "Enter the number of hours: ";
	cin >> hr;
	cout << "Enter the number of minutes: ";
	cin >> min;
	time(hr, min);
}


void time(int hr, int min)
{
	if((hr*60)>min){
	  cout << hr;	   
	}	
	if((hr*60)<min){
	  cout << min;	   
	}	
}