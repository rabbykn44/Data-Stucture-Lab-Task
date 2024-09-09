//Array Insertion
#include<iostream>
using namespace std;

int main ()
{
    int i, value, posi, size;

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

    cout << "Enter the position: ";
    cin >> posi;  // Input position for insertion

    cout << "Enter the value: ";
    cin >> value;  // Input value to insert

    for (i = size - 1; i >= posi; i--)
        arr[i + 1] = arr[i];  // Shift elements right

    arr[posi] = value;  // Insert value at position

    cout << "Array values after insertion: ";
    for (i = 0; i < size + 1; i++)
        cout << arr[i] << " ";  // Display modified array

    return 0;
}

