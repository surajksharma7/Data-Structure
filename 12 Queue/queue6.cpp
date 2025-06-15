#include <iostream>
using namespace std;

class Deque
{
private:
    int *arr;
    int front;
    int rear;
    int size;

public:
    Deque(int capacity)
    {
        size = capacity;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    ~Deque()
    {
        delete[] arr;
    }

    bool isEmpty()
    {
        return front == -1;
    }

    bool isFull()
    {
        return (front == (rear + 1) % size);
    }

    void pushFront(int value)
    {
        if (isFull())
        {
            cout << "Deque is full!" << endl;
            return;
        }

        if (isEmpty())
        {
            front = rear = 0;
        }
        else
        {
            front = (front - 1 + size) % size;
        }

        arr[front] = value;
    }

    void pushRear(int value)
    {
        if (isFull())
        {
            cout << "Deque is full!" << endl;
            return;
        }

        if (isEmpty())
        {
            front = rear = 0;
        }
        else
        {
            rear = (rear + 1) % size;
        }

        arr[rear] = value;
    }

    void popFront()
    {
        if (isEmpty())
        {
            cout << "Deque is empty!" << endl;
            return;
        }

        if (front == rear)
        {
            front = rear = -1;
        }
        else
        {
            front = (front + 1) % size;
        }
    }

    void popRear()
    {
        if (isEmpty())
        {
            cout << "Deque is empty!" << endl;
            return;
        }

        if (front == rear)
        {
            front = rear = -1;
        }
        else
        {
            rear = (rear - 1 + size) % size;
        }
    }

    int getFront()
    {
        if (isEmpty())
        {
            cout << "Deque is empty!" << endl;
            return -1;
        }
        return arr[front];
    }

    int getRear()
    {
        if (isEmpty())
        {
            cout << "Deque is empty!" << endl;
            return -1;
        }
        return arr[rear];
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "Deque is empty!" << endl;
            return;
        }

        cout << "Deque elements: ";
        int i = front;
        while (true)
        {
            cout << arr[i] << " ";
            if (i == rear)
                break;
            i = (i + 1) % size;
        }
        cout << endl;
    }
};

int main()
{
    Deque dq(5);

    dq.pushRear(10);
    dq.pushRear(20);
    dq.pushFront(5);
    dq.pushFront(1);
    dq.display();

    dq.popFront();
    dq.display();

    dq.popRear();
    dq.display();

    cout << "Front: " << dq.getFront() << endl;
    cout << "Rear: " << dq.getRear() << endl;

    return 0;
}
