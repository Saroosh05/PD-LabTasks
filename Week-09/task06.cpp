#include <iostream>
#include <string>
using namespace std;

int coloringTime(string cols[], int size);

main()
{
    string cols[100];
    int size;
    cout << "Enter the size of Array: ";
    cin >> size;

    for (int x = 0; x < size; x++)
    {
        cout << "Enter Element " << x + 1 << ": ";
        cin >> cols[x];
    }

    int result = coloringTime(cols, size);
    cout << "Time to color: " << result << " seconds";
}

int coloringTime(string cols[], int size)
{
    int time = 0;
    for (int x = 0; x < size; x++)
    {
        time += 2;
        if (cols[x] != cols[x + 1] && x < size - 1)
        {
            time++;
        }
    }
    return time;
}