#include <iostream>
using namespace std;

// Node structure to represent each element in the queue
struct Node
{
    int data;
    Node* next;
};

class Queue
{
private:
    Node* front;
    Node* rear;

public:
    Queue()
    {
        front = rear = nullptr;
    }

    // Enqueue function to add an element to the queue
    void enqueue(int value)
    {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = nullptr;

        if (rear == nullptr)
        {
            front = rear = newNode;
        }
        else
        {
            rear->next = newNode;
            rear = newNode;
        }
        cout << "Inserted " << value << endl;
    }

    // Dequeue function to remove an element from the queue
    void dequeue()
    {
        if (front == nullptr)
        {
            cout << "Queue Underflow!" << endl;
        }
        else
        {
            Node* temp = front;
            front = front->next;
            cout << "Dequeued " << temp->data << endl;
            delete temp;
        }
    }

    // Function to display the elements of the queue
    void display()
    {
        if (front == nullptr)
        {
            cout << "Queue is empty!" << endl;
        }
        else
        {
            Node* temp = front;
            cout << "Queue elements are: ";
            while (temp != nullptr)
            {
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }
    }
};

int main()
{
    Queue q;
    int choice, value;

    do
    {
        cout << "\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value to enqueue: ";
            cin >> value;
            q.enqueue(value);
            break;
        case 2:
            q.dequeue();
            break;
        case 3:
            q.display();
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


1. Enqueue
2. Dequeue
3. Display
4. Exit
Enter your choice: 1
Enter value to enqueue: 10
Inserted 10

1. Enqueue
2. Dequeue
3. Display
4. Exit
Enter your choice: 1
Enter value to enqueue: 20
Inserted 20

1. Enqueue
2. Dequeue
3. Display
4. Exit
Enter your choice: 1 
Enter value to enqueue: 30
Inserted 30

1. Enqueue
2. Dequeue
3. Display
4. Exit
Enter your choice: 2
Dequeued 10

1. Enqueue
2. Dequeue
3. Display
4. Exit
Enter your choice:   
