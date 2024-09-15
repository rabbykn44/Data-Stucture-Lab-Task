#include <iostream>
using namespace std;

int main()
{
    int i, size;
    char s_item;

    cout << "Enter the array size: ";
    cin >> size; // Input array size

    char arr[size]; // Declare array for characters

    cout << "Enter the array values (characters): ";
    for (i = 0; i < size; i++)
        cin >> arr[i]; // Input array elements

    cout << "Array values: ";
    for (i = 0; i < size; i++)
        cout << arr[i] << " "; // Display original array
    cout << endl;

    cout << "\nEnter the search item (character): ";
    cin >> s_item;

    // Perform linear search
    for (i = 0; i < size; i++)
    {
        if (arr[i] == s_item)
        {
            cout << i << " is the location of item '" << s_item << "'" << endl;
            break;
        }
    }

    if (i == size)
        cout << "Item not found" << endl;

    return 0;
}