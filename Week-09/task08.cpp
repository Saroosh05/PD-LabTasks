#include <iostream>
#include <string>
using namespace std;

string findBrokenKeys(string correctPhrase, string actualTyped);

main()
{
    string correctPhrase, actualTyped;
    cout << "Enter the correct phrase: ";
    getline(cin, correctPhrase);
    cout << "Enter what you actually typed: ";
    getline(cin, actualTyped);

    string result = findBrokenKeys(correctPhrase, actualTyped);
    cout << "Broken keys: " << result;
}

string findBrokenKeys(string correctPhrase, string actualTyped)
{
    string broken = "";
    for (int x = 0; correctPhrase[x] != '\0'; x++)
    {
        if (correctPhrase[x] != actualTyped[x])
        {
            broken += correctPhrase[x];
        }
    }

    for (int x = 0; broken[x] != '\0'; x++)
    {
        for (int y = 0; broken[y] != '\0'; y++)
        {
            if (x != y)
            {
                if (broken[x] == broken[y])
                {
                    for (int z = y; broken[z] != '\0'; z++)
                    {
                        broken[z] = broken[z + 1];
                    }
                }
            }
        }
    }

    return broken;
}