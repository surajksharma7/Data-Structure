#include<iostream>
using namespace std;

int main(){

    long long num1, num2;
    cin>>num1 >> num2;
    num1 = num1 % 10;
    num2 = num2 % 10;
    cout << num1 + num2 << endl;
    return 0;
}