#include <iostream>
using namespace std;

#define SIZE 5  // Defining the size of the stack

class Stack
{
private:
    int stack[SIZE];
    int top;

public:
    Stack()
    {
        top = -1;  // Initialize top to -1 indicating the stack is empty
    }

    // Push function to add an element to the stack
    void push(int value)
    {
        if (top >= SIZE - 1)
        {
            cout << "Stack Overflow!" << endl;
        }
        else
        {
            stack[++top] = value;
            cout << "Inserted " << value << endl;
        }
    }

    // Pop function to remove an element from the stack
    void pop()
    {
        if (top == -1)
        {
            cout << "Stack Underflow!" << endl;
        }
        else
        {
            cout << "Popped " << stack[top--] << endl;
        }
    }

    // Function to display the elements of the stack
    void display()
    {
        if (top == -1)
        {
            cout << "Stack is empty!" << endl;
        }
        else
        {
            cout << "Stack elements are: ";
            for (int i = 0; i <= top; i++)
            {
                cout << stack[i] << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    Stack s;
    int choice, value;

    do
    {
        cout << "\n1. Push\n2. Pop\n3. Display\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value to push: ";
            cin >> value;
            s.push(value);
            break;
        case 2:
            s.pop();
            break;
        case 3:
            s.display();
            break;
        case 4:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
        }
    }
    while (choice != 4);

    return 0;
}
