#include<iostream>
using namespace std;

main(){
	int num;
	cout << "Enter a 4-digit number: " ;
	cin >> num;
	int digit1 = num/1000;
	int digit2 = (num%1000)/100;
	int digit3 = ((num%1000)%100)/10;
	int digit4 = ((num%1000)%100)%10;
	cout << "Sum of the individual digits: " << digit1+digit2+digit3+digit4;
}