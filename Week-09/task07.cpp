#include <iostream>
#include <string>
using namespace std;

void convertPINToDance(string pin);

main()
{
    string pin;
    cout << "Enter your PIN (4 digits): ";
    cin >> pin;

    convertPINToDance(pin);
}

void convertPINToDance(string pin)
{
    string moves[10] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado", "Pop", "Lock", "Arabesque"};

    int size = pin.length();
    if (size != 4)
    {
        cout << "Invalid input.";
    }
    else
    {
        char nums[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
        int check, doubleCheck = 0;
        for (int x = 0; x < 4; x++)
        {
            check = 0;
            for (int y = 0; y < 10; y++)
            {
                if (pin[x] == nums[y])
                {
                    check++;
                    break;
                }
            }
            if (check == 0)
            {
                doubleCheck++;
            }
        }

        if (doubleCheck > 0)
        {
            cout << "Invalid input.";
        }
        else
        {
            int pinValue = pin[0] - '0';
            int index = pinValue;
            if (index > 9)
            {
                cout << moves[0];
            }
            else
            {
                cout << moves[index];
            }

            for (int x = 1; x < size; x++)
            {
                int pinValue = pin[x] - '0';
                int index = x + pinValue;
                if (index > 9)
                {
                    int index = 0;
                    while (x < size)
                    {
                        cout << ", " << moves[index];
                        index++;
                        x++;
                    }
                    break;
                }
                cout << ", " << moves[index];
            }
        }
    }
}