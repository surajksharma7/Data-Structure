#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void recursiveQueue(queue<int> &q)
{
    if (q.size() == 0 || q.empty())
    {
        return;
    }
    int front = q.front();
    q.pop();
    recursiveQueue(q);
    q.push(front);
}

void reverseQueue(queue<int> &q)
{
    stack<int> st;
    while (!q.empty())
    {
        int element = q.front();
        q.pop();
        st.push(element);
    }

    while (!st.empty())
    {
        int element = st.top();
        st.pop();
        q.push(element);
    }
};

int main()
{
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    recursiveQueue(q);
    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }
    return 0;
}

