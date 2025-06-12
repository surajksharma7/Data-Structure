#include <iostream>
#include <queue>
using namespace std;

int main()
{
    // queue<int> q;
    // // insertion
    // q.push(10);
    // q.push(20);
    // q.push(30);
    // q.push(40);

    // cout << q.front() << endl;
    // cout << q.back() << endl;

    // q.pop();
    // cout << q.front() << endl;

    // double ended queue
    deque<int> dq;
    dq.push_back(10);
    dq.push_back(20);
    dq.push_front(30);

    cout << dq.front() << endl;
    

    return 0;
}