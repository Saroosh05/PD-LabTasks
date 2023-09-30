#include <iostream>
using namespace std;

void boardgame(int uposition, int fposition);


main()
{
	int uposition, fposition;

	cout << "Enter your position: ";
	cin >> uposition;
	cout << "Enter your friend's position: ";
	cin >> fposition;
	boardgame(uposition,fposition);
}


void boardgame(int uposition, int fposition)
{
	if((fposition-uposition)>6){
	  cout << "false";	   
	}	
	if(!((fposition-uposition)>6)){
	  cout << "true";	   
	}
}