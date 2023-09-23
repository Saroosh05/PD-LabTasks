#include<iostream>
using namespace std;

main(){
	float ini;
	cout << "Enter Initial Velocity (m/s): " ;
	cin >> ini;
	float acc;
	cout << "Enter Acceleration (m/s^2): " ;
	cin >> acc;
	float time;
	cout << "Enter Time (s): " ;
	cin >> time;
	float final = (acc*time)+ini;
	cout << "Final Velocity (m/s): " << final;
}