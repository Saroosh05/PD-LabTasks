#include<iostream>
using namespace std;

main(){
	float veg_price,f_price,kg_veg,kg_f;
	cout << "Enter vegetable price per kilogram (in coins): " ;
	cin >> veg_price;
	cout << "Enter fruit price per kilogram (in coins): " ;
	cin >> f_price;
	cout << "Enter total kilograms of vegetables: " ;
	cin >> kg_veg;
	cout << "Enter total kilograms of fruits: " ;
	cin >> kg_f;
	float earning = ((kg_veg*veg_price)+(kg_f*f_price))/1.94;
	cout << "Total earnings in Rupees (Rps): " << earning;
}