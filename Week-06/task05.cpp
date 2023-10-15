#include<iostream>
using namespace std;

float calculateFruitPrice(string fruit, string dayOfWeek, float quantity);

main()
{   
    string fruit, dayOfWeek;
    float quantity;

    cout << "Enter the fruit name: ";
    cin >> fruit;
        
    cout << "Enter the day of the week (e.g., Monday, Sunday): ";
    cin >> dayOfWeek;

    cout << "Enter the quantity: ";
    cin >> quantity;
    
    float result = calculateFruitPrice(fruit, dayOfWeek, quantity);
    
    if( result != 0){
        cout << result << endl;
    }
    else {
        cout << "error";
    }
}

float calculateFruitPrice(string fruit, string dayOfWeek,float quantity)
{
    float price;
    if( dayOfWeek == "Saturday" || dayOfWeek == "Sunday"){
        if(fruit == "banana"){
            price = 2.70*quantity;
        }
        else if(fruit == "apple"){
            price = 1.25*quantity;
        }
        else if(fruit == "orange"){
            price = 0.90*quantity;
        }
        else if(fruit == "grapefruit"){
            price = 1.60*quantity;
        }
        else if(fruit == "kiwi"){
            price = 3.00*quantity;
        }
        else if(fruit == "pineapple"){
            price = 5.60*quantity;
        }
        else if(fruit == "grapes"){
            price = 4.20*quantity;
        }
        else {
            price = 0;
        }
    }
    else if(dayOfWeek == "Monday" || dayOfWeek == "Tuesdsay" || dayOfWeek == "Wednesday" || dayOfWeek == "Thursday" || dayOfWeek == "Friday"){
     if(fruit == "banana"){
            price = 2.50*quantity;
        }
        else if(fruit == "apple"){
            price = 1.20*quantity;
        }
        else if(fruit == "orange"){
            price = 0.85*quantity;
        }
        else if(fruit == "grapefruit"){
            price = 1.45*quantity;
        }
        else if(fruit == "kiwi"){
            price = 2.70*quantity;
        }
        else if(fruit == "pineapple"){
            price = 5.50*quantity;
        }
        else if(fruit == "grapes"){
            price = 3.85*quantity;
        }
        else {
            price = 0;
        }   
    }
    else {
        price = 0;
    }
    return price;
}
