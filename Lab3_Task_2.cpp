// Selection short

#include <iostream>
using namespace std;

int main()
{
    int i, j, value, size, position, s_item, smallest;

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

    for (position = 0; position < size - 1; position++)
    {
        smallest = position;
        for (i = position + 1; i < size; i++)
            if (arr[smallest] > arr[i])
                smallest = i;

        swap(arr[position], arr[smallest]);
    }

    cout << "Array values after soted: ";
    for (i = 0; i < size; i++)
        cout << arr[i] << " "; // Display original array
    cout << endl;

    return 0;
}
