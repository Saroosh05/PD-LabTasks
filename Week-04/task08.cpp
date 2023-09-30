#include <iostream>
using namespace std;

void pet(int holiday);


main()
{
	int holiday;
	cout << "Holidays: ";
	cin >> holiday;

	pet(holiday);

}


void pet(int holiday)
{
	int workingdays = 365 - holiday;
	int time = (workingdays*63) + ( holiday*127);
	int difference = 30000 - time;
	int hr = difference/60;
	int min = difference % 60;

	if(hr < 0){hr= -hr;}
	if(min < 0){min = -min;}
 
	if(time > 30000){
	   cout << "Tom will run away" <<endl;
	   cout << hr << " hours and " << min << " minutes for play";	   
	}	
	if(time < 30000){
	   cout << "Tom sleeps well" <<endl;
	   cout << hr << " hours and " << min << " minutes less for play";	   
	}	
}