#include<iostream>
using namespace std;

// Function to display the contents of the array
void displayArray(const int arr[], int size)
{
    cout << "Array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to insert an element at a specific position in the array
void insertAtPosition(int arr[], int &size, int value, int pos)
{
    if (pos < 0 || pos > size)
    {
        cout << "Invalid position!" << endl;
        return;
    }

    for (int i = size; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos] = value;
    size++;
}

// Function to delete an element from a specific position in the array
void deleteFromPosition(int arr[], int &size, int pos)
{
    if (pos < 0 || pos >= size)
    {
        cout << "Invalid position!" << endl;
        return;
    }

    for (int i = pos; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    size--;
}

void performAction(int arr[], int &size, int choice)
{
    int pos, value;

    switch (choice)
    {
    case 1:
        cout << "Enter position to insert: ";
        cin >> pos;
        cout << "Enter value to insert: ";
        cin >> value;
        insertAtPosition(arr, size, value, pos);
        displayArray(arr, size);
        break;

    case 2:
        cout << "Enter position to delete: ";
        cin >> pos;
        deleteFromPosition(arr, size, pos);
        displayArray(arr, size);
        break;

    case 3:
        displayArray(arr, size);
        break;

    default:
        cout << "Invalid choice!" << endl;
        break;
    }
}

int main()
{
    int size, choice;
    int arr[100];  // Array with a maximum size of 100

    // Prompt user for initial array size and values
    cout << "Enter initial array size: ";
    cin >> size;

    cout << "Enter array values: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    do
    {
        cout << "\nMenu:\n";
        cout << "1. Insert an element\n";
        cout << "2. Delete an element\n";
        cout << "3. Display array\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice != 4)
        {
            performAction(arr, size, choice);
        }

    }
    while (choice != 4);

    cout << "Exiting program!" << endl;
    return 0;
}

