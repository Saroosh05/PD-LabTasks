#include <iostream>
#include <string>
using namespace std;

string longest7SegmentWord(string inputArray[], int size);

main()
{
    int size;
    cout << "Enter the number of words: ";
    cin >> size;

    string inputArray[size];
    cout << "Enter the words, one by one: " << endl;
    for (int x = 0; x < size; x++)
    {
        cin >> inputArray[x];
    }

    string result = longest7SegmentWord(inputArray, size);
    cout << "Longest 7-segment word: " << result;
}

string longest7SegmentWord(string inputArray[], int size)
{
    int sizes[size];
    for (int x = 0; x < size; x++)
    {
        int y = 0;
        while (inputArray[x][y] != '\0')
        {
            if (inputArray[x][y] == 'k' || inputArray[x][y] == 'm' || inputArray[x][y] == 'v' || inputArray[x][y] == 'w' || inputArray[x][y] == 'x')
            {
                size;
                break;
            }
            y++;
        }
        sizes[x] = y;
    }

    int previous = 0;
    string longest = "";
    for (int x = 0; x < size; x++)
    {
        if (sizes[x] > previous)
        {
            previous = sizes[x];
            longest = inputArray[x];
        }
        else
        {
            previous = previous;
            longest = longest;
        }
    }

    return longest;
}