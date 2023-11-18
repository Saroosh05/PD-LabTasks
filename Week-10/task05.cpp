#include <iostream>
#include <string>
using namespace std;

string sortedArray(int arr[]);

main()
{
    int weights[100];
    cout << "Enter the weights of the 10 packages:  " << endl;
    for (int x = 0; x < 10; x++)
    {
        cin >> weights[x];
    }

    string result = sortedArray(weights);
    cout << "Sorted array in ascending order: " << result;
}

string sortedArray(int arr[])
{
    int sorted[10];

    for (int x = 0; x < 10; x++)
    {
        int c = 0;
        for (int y = 0; y < 10; y++)
        {
            if (arr[x] < arr[y])
            {
                c++;
            }
        }
        sorted[9 - c] = arr[x];
    }

    string output = "[" + to_string(sorted[0]);
    int num;
    for (int i = 1; i < 10; i++)
    {
        output += ", " + to_string(sorted[i]);
    }

    output += "]";
    return output;
}