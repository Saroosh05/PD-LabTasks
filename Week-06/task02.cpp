#include<iostream>
using namespace std;

float calculatePercentage(float marksEnglish, float marksMaths, float marksChemistry, float marksSocialScience, float marksBiology);
string calculateGrade(float result1);

main()
{   
    float marksEnglish, marksMaths, marksChemistry, marksSocialScience, marksBiology, percentage;
    string name;

    cout << "Enter student name: ";
    cin >> name;
    cout << "Enter marks for English: ";
    cin >> marksEnglish;
    cout << "Enter marks for Maths: ";
    cin >> marksMaths;
    cout << "Enter marks for Chemistry: ";
    cin >> marksChemistry;
    cout << "Enter marks for Social Science: ";
    cin >> marksSocialScience;
    cout << "Enter marks for Biology: ";
    cin >> marksBiology;

    cout << "Student Name: " << name << endl;

    float result1 = calculatePercentage(marksEnglish, marksMaths, marksChemistry, marksSocialScience, marksBiology);
    cout << "Percentage: " << result1 << "%" << endl;

    string result2 = calculateGrade(result1);
    cout << "Grade: " << result2;
}

float calculatePercentage(float marksEnglish, float marksMaths, float marksChemistry, float marksSocialScience, float marksBiology)
{
    float percent = ((marksEnglish + marksMaths + marksChemistry + marksSocialScience + marksBiology)/500)*100;
    return percent;
}

string calculateGrade(float result1)
{
    string output;
    if(result1 >= 90){
        output = "A+";
    }
    if(result1 < 90 && result1 >= 80){
        output = "A";
    }
    if(result1 < 80 && result1 >= 70){
        output = "B+";
    }
    if(result1 < 70 && result1 >= 60){
        output = "B";
    }
    if(result1 < 60 && result1 >= 50){
        output = "C";
    }
    if(result1 < 50 && result1 >= 40){
        output = "D";
    }
    if(result1 < 40){
        output = "F";
    }
    return output;
}