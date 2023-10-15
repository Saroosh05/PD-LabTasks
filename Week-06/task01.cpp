#include<iostream>
using namespace std;

string decideActivity(string temp, string humidity);

main()
{   
    string temp, humidity;

    cout << "Enter temperature (warm or cold): ";
    cin >> temp;
    cout << "Enter humidity (dry or humid): ";
    cin >> humidity;

    string result = decideActivity(temp,humidity);
    cout << "Recommended activity: " << result;
}

string decideActivity(string temp, string humidity)
{
    string recommend;
    if(temp == "warm"){
        if(humidity == "dry"){
            recommend = "Play tennis";
        }
        if(humidity == "humid"){
            recommend = "Swim";
        }
    } else 
    {
        if(humidity == "dry"){
            recommend = "Play basketball";
        }
        if(humidity == "humid"){
            recommend = "Watch TV";
        }
    }
    return recommend;
}