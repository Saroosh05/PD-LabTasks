#include <iostream>
using namespace std;

void discount(string, float);


main()
{

	string country;
	double price;

	cout << "Enter the country's name: ";
	cin >> country;

	cout << "Enter the ticket price in dollars: $";
	cin >> price;

	discount(country,price);
	
}


void discount(string country, float price)
{
	if(country == "Pakistan"){
	  float final = price - (0.05*price);
	  cout << "Final ticket price after discount: $" << final;	   
	}	
	if(country == "Ireland"){
	  float final = price - (0.1*price);
	  cout << "Final ticket price after discount: $" << final;	   
	}	
	if(country == "India"){
	  float final = price - (0.2*price);
	  cout << "Final ticket price after discount: $" << final;	   
	}	
	if(country == "England"){
	  float final = price - (0.3*price);
	  cout << "Final ticket price after discount: $" << final;	   
	}	
	if(country == "Canada"){
	  float final = price - (0.45*price);
	  cout << "Final ticket price after discount: $" << final;	   
	}	
}