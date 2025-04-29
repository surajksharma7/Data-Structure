#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;

    if(a %b == 0){
        cout << "Multiples\n" << endl;
    }
    else if (b % a == 0){
        cout  << "Multiples\n" << endl; 
    }
    else{
        cout << "No Multiples\n" << endl;
    }
    return 0;
}