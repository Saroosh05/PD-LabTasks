#include <iostream>
#include <string>
using namespace std;

bool isLengthEven(string inputString);

main()
{
    string inputString;
    cout << "Enter a String: ";
    getline(cin, inputString);

    bool result = isLengthEven(inputString);
    cout << result;
}

bool isLengthEven(string inputString)
{
    int length = 0;
    for (int x = 0; inputString[x] != '\0'; x++)
    {
        length++;
    }

    if (length % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}