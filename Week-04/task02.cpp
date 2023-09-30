#include <iostream>
using namespace std;

void reverse(string);


main()
{
	string TF;
	cout << "Enter 'true' or 'false': ";
	cin >> TF;

	reverse(TF);
}


void reverse(string TF)
{
	if(TF == "true"){
	   cout << "false";
	}	
	if(TF == "false"){
	   cout << "true";
	}	
}