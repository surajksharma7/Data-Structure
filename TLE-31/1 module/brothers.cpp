#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main() {
    string firstName, secondName;
    string firstName1, secondName2;

    cin >> firstName >> secondName;
    cin >> firstName1 >> secondName2;

    if((secondName2 == secondName)){
        cout << "ARE Brothers\n" << endl;
    }
    else{
        cout << "NOT\n";
    }
    return 0;
}