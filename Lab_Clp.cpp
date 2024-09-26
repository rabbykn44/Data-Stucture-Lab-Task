// Binary Search with Bubble sort
#include <iostream>
using namespace std;

int main()
{
    int i, j, value, size, s_item;

    cout << "Enter the array size: ";
    cin >> size;

    int arr[size];

    cout << "Enter the array values: ";
    for (i = 0; i < size; i++)
        cin >> arr[i];

    cout << "Array values: ";
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;

    for (i = 1; i < size; i++)
    {
        for (j = 0; j < size - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    cout << "Array values after Bubble sort: ";
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
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
