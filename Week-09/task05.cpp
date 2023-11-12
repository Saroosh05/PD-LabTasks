#include <iostream>
#include <string>
using namespace std;

int commonCharacters(string inputString1, string inputString2);

main()
{
    string inputString1;
    cout << "Enter the first string: ";
    getline(cin, inputString1);

    string inputString2;
    cout << "Enter the second string: ";
    getline(cin, inputString2);

    int result = commonCharacters(inputString1, inputString2);
    cout << "Number of common characters: " << result;
}

int commonCharacters(string inputString1, string inputString2)
{
    int count = 0;
    for (int x = 0; inputString1[x] != '\0'; x++)
    {
        for (int y = 0; inputString2[y] != '\0'; y++)
        {
            if (inputString1[x] == inputString2[y])
            {
                count++;
                inputString2[y] = ' ';
                break;
            }
        }
    }
    return count;
}