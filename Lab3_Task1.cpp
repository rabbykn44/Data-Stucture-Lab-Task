// Bubble short
#include <iostream>
using namespace std;

int main()
{
    int i, j, value, size, s_item;

    cout << "Enter the array size: ";
    cin >> size; // Input array size

    int arr[size]; // Declare array

    cout << "Enter the array values: ";
    for (i = 0; i < size; i++)
        cin >> arr[i]; // Input array elements

    cout << "Array values: ";
    for (i = 0; i < size; i++)
        cout << arr[i] << " "; // Display original array
    cout << endl;

    for (i = 1; i < size; i++)
        for (j = 0; j < size - i; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);

    cout << "Array values after soted: ";
    for (i = 0; i < size; i++)
        cout << arr[i] << " "; // Display original array
    cout << endl;

    return 0;
}
