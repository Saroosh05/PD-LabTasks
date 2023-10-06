#include <iostream>
using namespace std;

float volume(int length, int width, int height, string unit);

main()
{
    int length, width, height;
    string unit;
    cout << "Enter the length of the pyramid (in meters): ";
    cin >> length;
    cout << "Enter the width of the pyramid (in meters): ";
    cin >> width;
    cout << "Enter the height of the pyramid (in meters): ";
    cin >> height;
    cout << "Enter the desired output unit (millimeters, centimeters, meters, kilometers): ";
    cin >> unit;

    float result =  volume(length,width,height,unit);
    cout << "The volume of the pyramid is: " << result << " cubic " << unit ;
}

float volume(int length, int width, int height, string unit)
{
    float V = (length*width*height)/3.0;

    if(unit == "meters"){
        return V;
    }
    if(unit == "millimeters"){
        return V*(1000000000);
    }
   if(unit == "centimeters"){
        return V*(1000000);        
    }
   if(unit == "kilometers"){
        return ((length/1000.0)*(width/1000.0)*(height/1000.0))/3.0;        
    }
}

