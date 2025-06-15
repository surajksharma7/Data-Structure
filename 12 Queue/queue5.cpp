#include <iostream>
using namespace std;

class CircularQueue
{
public:
    int *arr;
    int front;
    int rear;
    int n;

    CircularQueue(int size)
    {
        arr = new int[size];
        this->n = size;
        front = -1;
        rear = -1;
    }

    bool isFull()
    {
        return (front == (rear + 1) % n);
    }

    bool isEmpty()
    {
        return front == -1;
    }

    void push(int value)
    {
        if (isFull())
        {
            cout << "Queue overflow" << endl;
            return;
        }
        if (isEmpty())
        {
            front = rear = 0;
        }
        else
        {
            rear = (rear + 1) % n;
        }
        arr[rear] = value;
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "Queue underflow" << endl;
            return;
        }
        if (front == rear)
        {
            front = rear = -1; // Queue becomes empty
        }
        else
        {
            front = (front + 1) % n;
        }
    }

    void getFront()
    {
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
        }
        else
        {
            cout << arr[front] << endl;
        }
    }

    int getSize()
    {
        if (isEmpty())
        {
            return 0;
        }
        else if (rear >= front)
        {
            return rear - front + 1;
        }
        else
        {
            return (n - front) + (rear + 1);
        }
    }
};

int main()
{
    CircularQueue q(5);
    q.push(10);
    q.push(20);
    q.getFront();                            // Should print 10
    cout << "Size: " << q.getSize() << endl; // Should print 2
    q.pop();
    q.getFront(); // Should print 20
    return 0;
}
