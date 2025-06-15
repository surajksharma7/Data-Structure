#include <iostream>
using namespace std;

class Deque
{
private:
    int *arr;
    int n;
    int rear;
    int front;

public:
    Deque(int size)
    {
        arr = new int[size];
        this->n = size;
        front = -1;
        rear = -1;
    }

    ~Deque()
    {
        delete[] arr;
    }

    void pushBack(int value)
    {
        if (rear == n - 1)
        {
            cout << "Deque overflow at rear" << endl;
        }
        else if (front == -1 && rear == -1)
        {
            front = rear = 0;
            arr[rear] = value;
        }
        else
        {
            rear++;
            arr[rear] = value;
        }
    }

    void popFront()
    {
        if (front == -1 && rear == -1)
        {
            cout << "Deque underflow at front" << endl;
        }
        else if (front == rear)
        {
            arr[front] = -1;
            front = rear = -1;
        }
        else
        {
            arr[front] = -1;
            front++;
        }
    }

    void pushFront(int value)
    {
        if (front == 0)
        {
            cout << "Deque overflow at front" << endl;
        }
        else if (front == -1 && rear == -1)
        {
            front = rear = 0;
            arr[front] = value;
        }
        else
        {
            front--;
            arr[front] = value;
        }
    }

    void popBack()
    {
        if (front == -1 && rear == -1)
        {
            cout << "Deque underflow at back" << endl;
        }
        else if (front == rear)
        {
            arr[rear] = -1;
            front = rear = -1;
        }
        else
        {
            arr[rear] = -1;
            rear--;
        }
    }

    void print()
    {
        if (front == -1)
        {
            cout << "Deque is empty" << endl;
            return;
        }

        for (int i = front; i <= rear; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Deque dq(5);

    dq.pushBack(10);
    dq.print(); 

    dq.pushFront(20);
    dq.print(); 

    dq.popFront();
    dq.print();

    dq.popBack();
    dq.print();

    dq.popBack();

    return 0;
}
