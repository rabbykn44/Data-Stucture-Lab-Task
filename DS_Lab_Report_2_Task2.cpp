//Binear Search
#include <iostream>
#include <algorithm> // For sorting the array
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

    // Sort the array for binary search
    sort(arr, arr + size);

    cout << "Sorted array values: ";
    for (i = 0; i < size; i++)
        cout << arr[i] << " "; // Display sorted array
    cout << endl;

    cout << "\nEnter the search item (character): ";
    cin >> s_item;

    int beg = 0, end = size - 1, mid;

    // Perform binary search
    while (beg <= end)
    {
        mid = (beg + end) / 2;

        if (arr[mid] == s_item)
        {
            cout << mid << " is the location of item '" << s_item << "'" << endl;
            return 0;
        }
        else if (arr[mid] < s_item)
            beg = mid + 1;
        else
            end = mid - 1;
    }

    cout << "Item not found" << endl;

    return 0;
}
