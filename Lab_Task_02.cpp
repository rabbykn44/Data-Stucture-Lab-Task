#include<iostream>
using namespace std;

int main ()
{
    int i, posi, size;

    cout << "Enter the array size: ";
    cin >> size;

    int arr[size];

    cout << "Enter the array values: ";
    for(i = 0; i < size; i++)
        cin >> arr[i];

    cout << "Array values: ";
    for(i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << "\nEnter the position to delete: ";
    cin >> posi;

    // Shift elements to the left to delete the element at the given position
    for(i = posi; i < size - 1; i++)
        arr[i] = arr[i + 1];

    size--;  // Decrease the size as an element is deleted

    cout << "Array values after deletion: ";
    for(i = 0; i < size; i++)
        cout << arr[i] << " ";

    return 0;
}

