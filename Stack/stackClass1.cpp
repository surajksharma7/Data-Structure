#include<iostream>
#include<stack>

using namespace std;

class Stack{
    public:
        int *arr;
        int size;
        int top;

        Stack(int capacity){
            arr = new int[capacity];
            size = capacity;
            top = -1;
        }

        void push(int val){
            if(top == size -1){
                // stack is already full agar insert karenge to stack 
                //  over flow  o=ho jyega
                cout << "Stack overflow" << endl;
            }
            else{
                top++;
                arr[top] = val;
            }
        }

        // pop 
        void pop(){
            if(top == -1){
                cout << "stack is empty " << endl;
            }
            else{
                arr[top] = -1;
                top--;
            }
        }

        int getSize(){
            return top+1;
        }

        bool isEmpty(){
            if(top == -1){
                return true;
            }
            else{
                return false;
            }
        }
        
        int getTop(){
            if(top == -1){
                cout << "there is no value" <<  endl;
                return -1;
            }
            else{
                return arr[top];
            }
        }   

        void print(){
            for(int i = 0; i<=top;i++){
                 cout << arr[i] << endl;
            }
        }

};

class Stack2Pointer{
    public:
        int * arr;
        int size;
        int top1;
        int top2;

        Stack2Pointer(int capacity){
            arr = new int[capacity];
            size = capacity;
            top1 = -1;
            top2 = size;
        }

        // push1 -> agar space available hai to push kar sakte hai
        void push1(int value){
            if(top2 - top1 == 1){
                cout << "Cant insert in the value";
            }
            top1++;
            arr[top1] = value;
        }
        // push2 
        void push2(int value){
            if(top2 - top1 == 1){
                cout << "Cant insert in the value";
            }
            top2--;
            arr[top2] = value;
        }
        // pop1
        void pop1(){
            if(top1 == -1){
                cout << "No element to pop" << endl;
            }
            arr[top1] = -1;
            top1--;
        }

        // pop2 
        void pop2(){
            if(top2 == size){
                cout << "stack overflow" << endl;
            }
            arr[top2] = -1;
            top2++;
        }
        // print
        void print(){
            for(int i = 0 ; i<size;i++){
                cout << arr[i] << " ";
            }
            cout << endl;
        }
         
};


void insertAtbottom(stack<int>&s, int value){
        if(s.empty()){
            s.push(value);
            return ;
        }
        int topElement = s.top();
        s.pop();
        insertAtbottom(s, value);
        s.push(topElement);
}
int main(){
    // Stack s(7);

    // s.push(10);
    // s.push(20);
    // s.push(30);
    // s.push(90);
    // s.push(50);
    // s.print();
    // s.push(50);

    // int ans = s.getTop();
    // cout << ans << endl;

    // cout << s.getSize() << endl;
    // cout << s.getTop() << endl;
    // cout << s.isEmpty() << endl;

    // s.pop();s.print();

    // Stack2Pointer s2(6);
    // s2.push1(10);
    // s2.push2(20);
    // s2.push1(30);
    // s2.push2(40);
    // s2.print();
    // s2.push1(100);

    // stack<char>s;
    // string name = "surajkumar";
    // Stack value(name.length());

    // for(int i = 0; i<name.length();i++){
    //     char ch = name[i];
    //     s.push(ch);
    // }

    // while(!s.empty()) {
    //      cout << s.top();
    //      s.pop();
    // }


    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    insertAtbottom(s,100);
    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
    return 0;
}