#include <iostream>
#include <string>
using namespace std;

string reverseWords(string inputString);

main()
{
    string inputString;
    cout << "Enter a string: ";
    getline(cin , inputString);

    string result = reverseWords(inputString);
    cout << "Reversed string: " << result;
}

string reverseWords(string inputString)
{
    string newString[100];
    int index = 0;
    string words;
    for(int x = 0; x < inputString.length(); x++)
    {
        words = "";
        while(inputString[x] != ' ' && x < inputString.length())
        {
            words += inputString[x];
             x++;
        }
        newString[index] = words;
        index++;
    }

    string reversed = newString[index-1];
    for(int i = index - 2; i >= 0; i--)
    {
        reversed += " " + newString[i];
    }
    return reversed;

}