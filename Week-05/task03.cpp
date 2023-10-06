#include <iostream>
using namespace std;

float taxCalculator(char type, float price);

main()
{
    char type; 
    float price;
    cout << "Enter the vehicle type code (M, E, S, V, T): ";
    cin >> type;
    cout << "Enter the price of vehicle: $";
    cin >> price;

    float result = taxCalculator(type,price);
    cout << "The final price of a vehicle of type " << type << " after adding tax is $" << result << "." ;
}

float taxCalculator(char type, float price)
{
    if(type == 'M'){
        float afterTax = price + ((6*0.01)*price); 
        return afterTax;
    }
    if(type == 'E'){
        float afterTax = price + ((8*0.01)*price); 
        return afterTax;
    }
    if(type == 'S'){
        float afterTax = price + ((10*0.01)*price); 
        return afterTax;
    }
    if(type == 'V'){
        float afterTax = price - ((12*0.01)*price); 
        return afterTax;
    }
    if(type == 'T'){
        float afterTax = price - ((15*0.01)*price); 
        return afterTax;
    }
}

