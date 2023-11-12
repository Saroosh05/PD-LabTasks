#include <iostream>
#include <string>
using namespace std;

void evenOddTransform(int arr[], int size, int n);

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

    int n;
    cout << "Enter number of times even-odd transformation need to be done: ";
    cin >> n;

    evenOddTransform(numbers, size, n);
}

void evenOddTransform(int arr[], int size, int n)
{
    cout << "[";
    for (int y = 1; y <= n; y++)
    {
        if (arr[0] % 2 == 0)
        {
            arr[0] -= 2;
        }
        else
        {
            arr[0] += 2;
        }
    }
    cout << arr[0];

    for (int x = 1; x < size; x++)
    {
        for (int y = 1; y <= n; y++)
        {
            if (arr[x] % 2 == 0)
            {
                arr[x] -= 2;
            }
            else
            {
                arr[x] += 2;
            }
        }
        cout << ", " << arr[x];
    }
    cout << "]";
}