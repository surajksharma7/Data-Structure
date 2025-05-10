#include<iostream>
#include<vector>
using namespace std;

int main() {
    long long val1,val2,k;
    cin>>val1 >> val2 >> k;

    if((val1%k == 0) && (val2 % k == 0)){
        cout << "Both\n";
    }
    else if( val1 % k == 0){
        cout << "Memo\n";
    }
    else if(val2 % k == 0){
        cout << "Momo\n";
    }
    else{
        cout << "No One\n";
    }
    return 0;
}