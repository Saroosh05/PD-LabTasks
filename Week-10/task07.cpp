#include <iostream>
#include <string>
using namespace std;

bool arrangement(int numbers[], int size);

main()
{
    int numbers[100];
    int size;
    cout << "Enter the length of the array: ";
    cin >> size;

    cout << "Enter the elements of the array: " << endl;
    for (int x = 0; x < size; x++)
    {
        cin >> numbers[x];
    }

    bool result = arrangement(numbers, size);
    cout << "Can be arranged: " << result;
}

bool arrangement(int numbers[], int size)
{
    int sorted[100];

    for (int x = 0; x < size; x++)
    {
        int c = 0;
        for (int y = 0; y < size; y++)
        {
            if (numbers[x] < numbers[y])
            {
                c++;
            }
        }
        sorted[(size - 1) - c] = numbers[x];
    }

    int c = 0;
    for (int x = 0; x+1 < size; x++)
    {
        if (sorted[x] != sorted[x + 1] - 1)
        {
            c++;
        }
    }
    if (c > 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}
