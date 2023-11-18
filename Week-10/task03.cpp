#include <iostream>
#include <string>
using namespace std;

bool isRepeatingCycle(int length);
int numbers[100];
int n;

main()
{
    cout << "Enter the length of the array: ";
    cin >> n;

    cout << "Enter the elements of the array: " << endl;
    for (int x = 0; x < n; x++)
    {
        cin >> numbers[x];
    }

    int length;
    cout << "Enter the length of the cycle: ";
    cin >> length;

    bool result = isRepeatingCycle(length);
    cout << "Output: " << result;
}

bool isRepeatingCycle(int length)
{
    int c = 0;
    for (int x = 0; x + length < n; x++)
    {
        if (numbers[x] != numbers[x + length])
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