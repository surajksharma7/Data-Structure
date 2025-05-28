#include <iostream>
#include <vector>
#include<stack>
#include<climits>
using namespace std;

void  solve(stack<int>&s, int count){
    if(count == 0){
        cout << s.top() << endl;
        return;
    }
    int value = s.top();
    s.pop();
    solve(s,count-1);
    s.push(value);
};
 
bool checkSorted(stack<int>&s, int &count){
    if(s.empty()){
        return true;
    }
    int value = s.top();
    s.pop();
    if( value < count){
        bool nextAns = checkSorted(s, count);
        return nextAns;
    }
    s.push(value);
    return false;
}
void inesertAtend(stack<int>&s, int value){
    if(s.empty()){
        s.push(value);
        return;
    }
    int temp = s.top();
    s.pop();
    inesertAtend(s,value);
    s.push(temp);
}
void reverseStack(stack<int>&s){

    if(s.empty()){
        return;
    }
    int value = s.top();
    s.pop();
    reverseStack(s);
    inesertAtend(s,value);
}

void printStack(stack<int> s) {
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

void sortedInsert(stack<int>&s, int val){
    if(!s.empty() && s.top() <= val){
        s.push(val);
        return;
    }
    int top = s.top();
    s.pop();
    sortedInsert(s, val);
    s.push(top);
}
int main() {
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);
    printStack(s);
    // int count = s.size()/2;
    // solve(s,count);
    // int element1 = INT_MAX;
    // cout << checkSorted(s, element1);


    sortedInsert(s,45);
    // reverseStack(s);
    printStack(s);

    return 0;
}