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
                // stack is already full agar insert karenge to stack over flow  o=ho jyega
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
            }
            else{
                return arr[top];
            }
        }

};

int main(){




    return 0;
}