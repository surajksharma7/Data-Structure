#include <iostream>
#include <queue>

using namespace std;
int main()
{
    deque<int> dq;
    dq.push_front(10);
    dq.push_front(30);
    dq.push_back(20);
    dq.push_front(50);
    dq.push_back(40);

    cout << dq.size() << endl;
    cout << dq.front() << endl;
    dq.pop_front();
    cout << dq.front() << endl;
    return 0;
}