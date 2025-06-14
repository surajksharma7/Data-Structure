#include <iostream>

using namespace std;

class Queue
{
    // array -> size -> front -> rear
private:
    int *arr;
    int n;
    int rear;
    int front;

public:
    Queue(int size)
    {
        arr = new int[size];
        this->n = size;
        front = -1;
        rear = -1;
    }

    void push(int value)
    {
        if (rear == n - 1)
        {
            cout << "stack overflow" << endl;
        }
        else if (front == -1 && rear == -1)
        {
            rear++;
            front++;
            arr[rear] = value;
        }
        else
        {
            rear++;
            arr[rear] = value;
        }
    }

    void pop()
    {
        if (front == -1 && rear == -1)
        {
            cout << "stack is empty" << endl;
        }
        else if (front == rear)
        {
            arr[front] = -1;
            front = -1;
            rear = -1;
        }
        else
        {
            arr[front] = -1;
            front++;
        }
    }

    int getFront()
    {
        if (front == -1 && rear == -1)
        {
            cout << "no value present" << endl;
            return -1;
        }
        return arr[front];
    }

    int getSize()
    {
        return rear - front + 1;
    }

    bool isEmpty()
    {
        if (front == -1 && rear == -1)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    Queue q(5);

    q.push(10);
    q.push(20);
    cout << "value " << q.getFront() << endl;
    q.pop();
    cout << "value " << q.getFront() << endl;

    cout << q.getSize() << endl;

    return 0;
}