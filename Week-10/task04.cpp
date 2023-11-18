#include <iostream>
#include <string>
using namespace std;

int volume(int arr[], int boxes);

main()
{
    int n = 0;
    cout << "Enter the number of boxes  : ";
    cin >> n;

    int dimensions[100];
    cout << "Enter the dimensions of the boxes (length, width, height):  " << endl;
    for (int x = 0; x < n*3; x++)
    {
        cin >> dimensions[x];
    }

    int result = volume(dimensions, n);
    cout << "Total volume of all boxes: " << result;
}

int volume(int arr[], int boxes)
{
    int box[100];
    int index = 0;
    for(int x = 0; x < boxes*3; x += 3)
    {
        box[index] = arr[x]*arr[x+1]*arr[x+2];
        index++;
    }

    int volume = 0;
    for(int x = 0; x < boxes; x++)
    {
        volume += box[x];
    }
    return volume;
}