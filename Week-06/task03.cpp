#include<iostream>
using namespace std;

string findZodiacSign(int day, string month);
main()
{   
    int day;
    string month;

    cout << "Enter the day of birth: ";
    cin >> day;
    cout << "Enter the month of birth (e.g., January, February): ";
    cin >> month;


    string result = findZodiacSign( day, month);
    cout << "Zodiac Sign: " << result;

}

string findZodiacSign(int day, string month)
{
    string sign;
    if((month == "March" && (day >= 21 && day <= 31)) || (month == "April" && day <= 19)){
        sign = "Aries";
    }
    if((month == "April" && (day >= 20 && day <= 30)) || (month == "May" && day <= 20)){
        sign = "Taurus";
    }
    if((month == "May" && (day >= 21 && day <= 31)) || (month == "June" && day <= 20)){
        sign = "Gemini";
    }    
    if((month == "June" && (day >= 21 && day <= 30)) || (month == "July" && day <= 22)){
        sign = "Cancer";
    }    
    if((month == "July" && (day >= 23 && day <= 31)) || (month == "August" && day <= 22)){
        sign = "Leo";
    }    
    if((month == "August" && (day >= 23 && day <= 30)) || (month == "September" && day <= 22)){
        sign = "Virgo";
    }    
    if((month == "September" && (day >= 23 && day <= 31)) || (month == "October" && day <= 22)){
        sign = "Libra";
    }    
    if((month == "October" && (day >= 23 && day <= 30)) || (month == "November" && day <= 21)){
        sign = "Scorpio";
    }    
    if((month == "November" && (day >= 22 && day <= 31)) || (month == "December" && day <= 21)){
        sign = "Sagittarius";
    }    
    if((month == "December" && (day >= 22 && day <= 30)) || (month == "January" && day <= 19)){
        sign = "Capricorn";
    }    
    if((month == "January" && (day >= 20 && day <= 31)) || (month == "February" && day <= 18)){
        sign = "Aquarius";
    }    
    if((month == "Febraury" && (day >= 19 && day <= 30)) || (month == "March" && day <= 20)){
        sign = "Pisces";
    }
    return sign;
}

