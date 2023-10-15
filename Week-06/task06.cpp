#include<iostream>
using namespace std;

string appartment(string month, int numberOfStays);
string studio(string month, int numberOfStays);

main()
{   
    string month;
    int numberOfStays;

    cout << "Enter the month (May, June, July, August, September, October): ";
    cin >> month;
        
    cout << "Enter the number of stays: ";
    cin >> numberOfStays;
   
    string result1 = appartment(month, numberOfStays);
    cout << result1 << endl;
    string result2 = studio(month, numberOfStays);
    cout << result2 << endl;
 
}

string appartment(string month, int numberOfStays)
{
    float price,discount;
    string output;
    if(month == "May" || month == "October"){
        price = 65.0*numberOfStays;
    }
    else if(month == "June" || month == "September"){
        price = 68.70*numberOfStays;
    }
    else if(month == "July" || month == "August"){
        price = 77.0*numberOfStays;
    }

    if(numberOfStays <= 14){
        output = "Appartment: " + to_string(price) + "$.";
        return output;
    }   

    if(numberOfStays > 14){
        discount = price - (0.1*price);
        output = "Appartment: " + to_string(discount) + "$.";
        return output;
    }
}

string studio(string month, int numberOfStays)
{
    float price;
    string output;
    if(month == "May" || month == "October"){
        price = 50.0*numberOfStays;
        if(numberOfStays > 7){
            price = price - (0.05*price);
        }
        if(numberOfStays > 14){
            price = price - (0.3*price);
        }
    }
    else if(month == "June" || month == "September"){
        price = 75.20*numberOfStays;
        if(numberOfStays > 14){
            price = price - (0.2*price);
        }
    }
    else if(month == "July" || month == "August"){
        price = 76.0*numberOfStays;
    }

    output = "Studio: " + to_string(price) + "$.";
    return output;
}