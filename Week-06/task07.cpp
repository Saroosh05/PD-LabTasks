#include<iostream>
using namespace std;

string checkStudentStatus(int examHour, int examMinute, int studentHour, int studentMinute);

main()
{   
    int examHour, examMinute, studentHour, studentMinute;

    cout << "Enter Exam Starting Time (hour): ";
    cin >> examHour;
    cout << "Enter Exam Starting Time (minutes): ";
    cin >> examMinute;
    cout << "Enter Student hour of arrival: ";
    cin >> studentHour;
    cout << "Enter Student minutes of arrival: ";
    cin >> studentMinute;
    
    string result = checkStudentStatus(examHour, examMinute, studentHour, studentMinute);
    cout << result ;
}

string checkStudentStatus(int examHour, int examMinute, int studentHour, int studentMinute)
{
    int e_min = (examHour*60) + examMinute;
    int s_min = (studentHour*60) + studentMinute; 
    int output,hr,min;
    string status;

    if(s_min > e_min){
        output = s_min - e_min;
        if(output > 60){
            hr = output/60;
            min = output%60;
            status = "Late\n" + to_string(hr) + ":" + to_string(min) + " hours after the start" ;
        } 
        else {
            status = "Late\n" + to_string(output)+ " minutes after the start" ;
        }
    }
    else if(e_min - s_min <= 30){
        status = "On time";
    }
    else if(e_min - s_min > 30){
        output = e_min - s_min;
        if(output > 60){
            hr = output/60;
            min = output%60;
            status = "Early\n" + to_string(hr) + ":" + to_string(min) + " hours before the start" ;
        }
        else {
            status = "Early\n" + to_string(output)+ " minutes before the start" ;
        }
    }
    return status;
}
