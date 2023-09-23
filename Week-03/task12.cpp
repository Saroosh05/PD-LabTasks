#include<iostream>
using namespace std;

main(){
	int sq_meters,width,height;
	cout << "Number of square meters you can paint: " ;
	cin >> sq_meters;
	cout << "Width of the single wall (in meters): " ;
	cin >> width;
	cout << "Height of the single wall (in meters): " ;
	cin >> height;
	int paint = sq_meters/(width*height);
	cout << "Number of walls you can paint: " << paint ;
}