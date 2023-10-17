#include<iostream>
#include<cmath>
using namespace std;

float calculateVolleyballGames(string , int, int);

main()
{   
    string yearType;
    int holidays, hometownWeekends;

    cout << "Enter year type: ";
    cin >> yearType;
    cout << "Enter number of holidays: ";
    cin >> holidays;
    cout << "Enter number of weekends: ";
    cin >> hometownWeekends;
    
    float result = calculateVolleyballGames(yearType, holidays, hometownWeekends);
    cout << ceil(result) ;
}

float calculateVolleyballGames(string yearType, int holidays, int hometownWeekends)
{
    float playingDays = ((48 - hometownWeekends)*0.75)+ (0.667*holidays)  + hometownWeekends;
    if(yearType == "leap"){
        playingDays = playingDays + (0.15*playingDays);
    }
    return playingDays;
}
