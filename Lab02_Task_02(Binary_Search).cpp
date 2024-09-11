//Binary Search
#include<iostream>
using namespace std;

int main ()
{
    int i, value, size, s_item;

    cout << "Enter the array size: ";
    cin >> size;  // Input array size

    int arr[size];  // Declare array

    cout << "Enter the array values: ";
    for (i = 0; i < size; i++)
        cin >> arr[i];  // Input array elements

    cout << "Array values: ";
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";  // Display original array
    cout << endl;

    cout << "\nEnter the search item: ";
    cin >> s_item;

    int beg = 0, end = size - 1, mid = 0;

    mid = (beg + end) / 2;

    while (arr[mid] != s_item && beg <= end)
    {
        if (s_item < arr[mid])
            end = mid - 1;
        else if (s_item > arr[mid])
            beg = mid + 1;

        mid = (beg + end) / 2;
    }

    if (arr[mid] == s_item)
        cout << mid << " is the location of " << s_item << endl;
    else
        cout << "Item is not found" << endl;

    return 0;
}

