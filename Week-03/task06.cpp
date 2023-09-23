#include<iostream>
using namespace std;

main(){
	float size,cost,area;
	cout << "Enter the size of the fertilizer bag in pounds: " ;
	cin >> size;
	cout << "Enter the cost of the bag: $" ;
	cin >> cost;
	cout << "Enter the area in square feet that can be covered by the bag: " ;
	cin >> area;
	float costf = cost/size;
	cout << "Cost of fertilizer per pound: $" << costf <<endl;
	float costa = cost/area;
	cout << "Cost of fertilizing per square foot: $" << costa;
}