#include<iostream>
using namespace std;

float amountDue(char serviceCode, float min, char time);
void timeOfCall(char serviceCode);
string serviceType(char serviceCode);

main()
{   
    char serviceCode,time;
    float min;

    cout << "Enter the service code (R/r for regular, P/p for premium): ";
    cin >> serviceCode;
    
    if(serviceCode == 'P' || serviceCode == 'p'){
        
         cout << "Enter time of the call (D/d for day, N/n for night): ";
         cin >> time;
    }
    
    cout << "Enter the number of minutes used: ";
    cin >> min;


    string result1 = serviceType(serviceCode);
    cout << "Service Type: " << result1 << endl;

    cout << "Total Minutes Used: " << min << " minutes" <<endl;

    float result2 = amountDue(serviceCode, min,time);
    cout << "Amount Due: $" << result2 << endl;
}

string serviceType(char serviceCode)
{
    string output;
    if(serviceCode == 'P' || serviceCode == 'p'){
        output = "Premium";
    }
    if(serviceCode == 'R' || serviceCode == 'r'){
        output = "Regular";
    }  
    return output;
}


float amountDue(char serviceCode, float min , char time)
{
    float rate;
    if(serviceCode == 'P' || serviceCode == 'p'){


        if(time == 'D' || time == 'd'){
            if(min <= 75){
                rate = 25;
            } 
            else {
                rate = ((min-75)*0.10)+25;
            }
        }
        else {
            if(min <= 100){
                rate = 25;
            } 
            else {
                rate = ((min-100)*0.05)+25;
            }
        }
    }
    else {
        if(min <= 50){
            rate = 10;
        } 
        else {
            rate = ((min-50)*0.20)+10;
        }
    }
    return rate;
}