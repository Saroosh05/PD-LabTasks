#include<iostream>
using namespace std;

main(){
	int nums;
	cout << "Enter five integers: " ;
	cin >> nums;
	int sum = (nums/10000)+((nums%10000)/1000)+(((nums%10000)%1000)/100)+((((nums%10000)%1000)%100)/10)+((((nums%10000)%1000)%100)%10);
	cout << "Sum of the individual digits: " << sum;
}