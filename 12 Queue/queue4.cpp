#include <iostream>
#include <queue>

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
    void pushBack(int value)
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
    void popFront()
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

    int pushFront(int value){
        if(front == 0){
            cout << "queue overflow" << endl;
        }
        
    }
    
};

int main()
{
}