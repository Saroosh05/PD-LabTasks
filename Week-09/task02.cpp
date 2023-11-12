#include <iostream>
#include <string>
using namespace std;

string containsSeven(int numbers[], int size);

main()
{
    int size;
    cout << "Enter the size of Array: ";
    cin >> size;

    int numbers[size];
    for (int x = 0; x < size; x++)
    {
        cout << "Enter Element " << x + 1 << ": ";
        cin >> numbers[x];
    }

    string result = containsSeven(numbers, size);
    cout << result;
}

string containsSeven(int numbers[], int size)
{
    int y = 0;
    for (int x = 0; x < size; x++)
    {
        if (numbers[x] / 10 == 0)
        {
            if (numbers[x] == 7)
            {
                y++;
            }
        }
        else
        {
            while (numbers[x] != 0)
            {
                if (numbers[x] % 10 == 7)
                {
                    y++;
                }
                numbers[x] = numbers[x] / 10;
                
            }
        }
    }
    string output;
    if (y == 0)
    {
        output = "there is no 7 in the array";
    }
    else
    {
        output = "Boom!";
    }
    return output;
}