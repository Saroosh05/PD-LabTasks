#include <iostream>
#include <string>
using namespace std;

int rotations(string leftRight[], int size);

main()
{
    string leftRight[100];
    int size;
    cout << "Enter the length of the array: ";
    cin >> size;

    cout << "Enter the elements of the array (\"left\" or \"right\"): " << endl;
    for (int x = 0; x < size; x++)
    {
        cin >> leftRight[x];
    }

    int result = rotations(leftRight, size);
    cout << "Number of full rotations: " << result;
}

int rotations(string leftRight[], int size)
{
    int count = 1, num = 0;
    for (int x = 0; x + 1 < size; x++)
    {
        if (leftRight[x] == leftRight[x + 1])
        {
            count++;
        }
        else
        {
            count = 0;
        }

        if (count == 4)
        {
            num++;
            count = 0;
        }
    }
    return num;
}
