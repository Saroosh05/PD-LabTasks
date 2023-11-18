#include <iostream>
#include <string>
using namespace std;

int progressDays(int arr[], int size);

main()
{
    int n = 0;
    cout << "Enter the number of Saturdays: ";
    cin >> n;

    int miles[100];

    for (int x = 0; x < n; x++)
    {
        cout << "Enter miles run for Saturday " << x + 1 << ": ";
        cin >> miles[x];
    }

    int result = progressDays(miles, n);
    cout << "Total progress days: " << result;
}

int progressDays(int arr[], int size)
{
    int count = 0;
    for (int x = 1; x < size; x++)
    {
        if (arr[x] > arr[x - 1])
        {
            count++;
        }
    }

    return count;
}