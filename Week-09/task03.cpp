#include <iostream>
#include <string>
using namespace std;

bool areAllElementsIdentical(string inputString[], int size);

main()
{
    string inputString[100];
    int size;
    cout << "Enter the size of Array: ";
    cin >> size;

    for (int x = 0; x < size; x++)
    {
        cout << "Enter Element " << x + 1 << ": ";
        cin >> inputString[x];
    }

    bool result = areAllElementsIdentical(inputString, size);
    cout << result;
}

bool areAllElementsIdentical(string inputString[], int size)
{
    int y = 0;
    for (int x = 1; x < size; x++)
    {
        if (inputString[x] != inputString[x - 1])
        {
            y++;
        }
    }

    if (y == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}