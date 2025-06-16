#include <iostream>
#include<stack>
#include<queue>

using namespace std;
void reverseInGroup(queue<int>&q, int k,int count){
    if(count >= k){
        stack<int> st;
        for (int i = 0; i < k;i++){
            int element = q.front();
            q.pop();
            st.push(element);
        }

        for (int i = 0; i < k;i++){
            int element = st.top();
            st.pop();
            q.push(element);
        }
        reverseInGroup(q, k, count - k);
    }
    else
    {
        for (int i = 0; i < count;i++){
            int element = q.front();
            q.pop();
            q.push(element);
        }
    }
}

int main()
{
    queue<int> q;
    for (int i = 0; i < 10;i++){
        int val = i * 10+10;
        q.push(val);
    }
    int k = 3;
    int count = q.size();
    reverseInGroup(q, k, count);
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}