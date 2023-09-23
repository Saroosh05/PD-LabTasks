#include<iostream>
using namespace std;

main(){
	int polygon;
	cout << "Enter the number of sides of the polygon: " ;
	cin >> polygon;
	int angles = (polygon-2)*180;
	cout << "The sum of internal angles of a " << polygon <<"-sided polygon is: " << angles <<" degrees";
}