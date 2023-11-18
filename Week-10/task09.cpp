#include <iostream>
#include <string>
using namespace std;

int specialValue(int numbers[], int size);

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

    int result = specialValue(numbers, size);
    cout << "Special value: " << result;
}

int specialValue(int numbers[], int size)
{
    int count;
    int check = 0;
    for (int x = 0; x < size; x++)
    {
        count = 0;
        for (int y = 0; y < size; y++)
        {
            if (numbers[y] >= x)
            {
                count++;
            }
        }
        
        if (count == x + 1)
        {
            check = x + 1;
            break;
        }
    }
    if (check == 0)
    {
        return -1;
    }
    else
    {
        return check;
    }
}
