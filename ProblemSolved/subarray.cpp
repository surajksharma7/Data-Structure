#include<iostream>
using namespace std;

int main(){
    int arr[3][4] = {{1,2,3},{3,4,5}};
    for(int i = 0;i < 3; i++){
        int sum =0;
        for(int j = 0;j<4;j++){
            sum = sum+arr[i][j];
        }
        cout << sum << " ";
    }

    return 0;
}