#include <iostream>
using namespace std;

string projectTimeCalculation(int hr, int days, int workers);

main()
{
    int hr, days, workers;
    cout << "Enter the needed hours: ";
    cin >> hr;
    cout << "Enter the days that the firm has: ";
    cin >> days;
    cout << "Enter the number of all workers: ";
    cin >> workers;
    
    string result =  projectTimeCalculation(hr, days,workers);
    cout << result;
}

string projectTimeCalculation(int hr, int days, int workers)
{
    string output;
    float workingDays = (days - ((10*0.01)*days));
    int timeSpend = (workingDays)*10*workers;
    if(timeSpend > hr){
        output =  "Yes!" + to_string(timeSpend-hr) + " hours left.";
        
    }
    if(!(timeSpend > hr)){
        output = "Not enough time!" + to_string(hr-timeSpend) +  " hours needed.";
    }
    return output;
}

