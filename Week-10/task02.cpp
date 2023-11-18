#include <iostream>
#include <string>
using namespace std;

int countLetter(string arr[], int size, char letter);

main()
{
    int n;
    cout << "Enter how many words you want to enter: ";
    cin >> n;

    string counting[100];

    for (int x = 0; x < n; x++)
    {
        cout << "Enter word " << x + 1 << ": ";
        cin >> counting[x];
    }

    char letter;
    cout << "Enter the letter you want to count: ";
    cin >> letter;

    int result = countLetter(counting, n, letter);
    cout << letter << " shows up " << result << " times in the data.";
}

int countLetter(string arr[], int size, char letter)
{
    int count = 0;
    for (int x = 0; x < size; x++)
    {
        for (int y = 0; arr[x][y] != '\0'; y++)
        {
            if (letter == arr[x][y])
            {
                count++;
            }
        }
    }

    return count;
}