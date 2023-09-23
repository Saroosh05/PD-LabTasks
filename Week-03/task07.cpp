#include<iostream>
using namespace std;

main(){
	string name;
	float aprice,cprice,charity;
	int aticket, cticket;
	cout << "Enter the movie name: " ;
	cin >> name;
	cout << "Enter the adult ticket price: $" ;
	cin >> aprice;
	cout << "Enter the child ticket price: $" ;
	cin >> cprice;
	cout << "Enter the number of adult tickets sold: " ;
	cin >> aticket;
	cout << "Enter the number of child tickets sold: " ;
	cin >> cticket;
	cout << "Enter the percentage of the amount to be donated to charity: ";
	cin >> charity;
	int total = (aprice*aticket)+(cprice*cticket);

	cout <<endl;

	cout << "Movie: " << name << endl;	
	cout << "Total amount generated from ticket sales: $" << total <<endl;
	int donate = (charity/100)*total;
	cout << "Donation to charity (" << charity << "%): $" << donate <<endl; 
	int remain = total-donate;
	cout << "Remaining amount after donation: $" << remain;
}