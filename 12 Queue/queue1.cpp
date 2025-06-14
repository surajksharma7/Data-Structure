#include <iostream>
#include <queue>

using namespace std;

int main()
{

    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    // operationsx of queue
    cout << q.front() << endl;
    q.pop();
    cout << q.size() << endl;
    cout << q.front() << endl;
    cout << q.back() << endl;
    return 0;
}