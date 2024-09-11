//linear search
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

    cout<<"\nInter the search iteam :";
    cin>>s_item;

    for (i=0 ; i<size; i++)
    {
        if(arr[i]== s_item)
        {

            cout<<i<< " is location of iteam "<< s_item;
            break;
        }

    }
    if (i==size)

        cout<<"Iteam not found";

    return 0;
}
