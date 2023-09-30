#include <iostream>
using namespace std;

void flowerShop(int redRose, int whiteRose, int tulip);


main()
{
	int redRose, whiteRose,tulip;

	cout << "Red Rose: ";
	cin >> redRose;
	cout << "White Rose: ";
	cin >> whiteRose;
	cout << "Tulips: ";
	cin >> tulip;
	flowerShop(redRose, whiteRose, tulip);
}


void flowerShop(int redRose, int whiteRose, int tulip)
{
	float price = (redRose*2.00)+(whiteRose*4.10)+(tulip*2.50);
	cout << "Original Price: $" << price <<endl;
	if(price>200){
	  float discount = price-(0.2*price); 
	  cout << "Price after Discount: $" << discount;	   
	}	
	if(!(price>200)){
	  cout << "No discount applied.";	   
	}
}