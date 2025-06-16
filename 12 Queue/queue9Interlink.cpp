#include <iostream>
#include<vector>
#include<queue>
using namespace std;

class Solution{
    public:
        vector<int> rearrange(queue<int>&q1){
            vector<int> ans;
            queue<int> q2;

            int n = q1.size();
            int half = n / 2;

            while(half--){
                int element = q1.front();
                q1.pop();
                q2.push(element);
            }
            int size = q1.size();
            while (size--)
            {
                ans.push_back(q2.front());
                q2.pop();
                ans.push_back(q1.front());
                q1.pop();
            }
            return ans;
        }
};

int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    Solution s;

    vector<int> result = s.rearrange(q);
    for (int val : result)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}