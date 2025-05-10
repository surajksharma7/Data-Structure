#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    int num1, num2,num3;
    int temp;
    cin >> num1 >> num2 >> num3 ;
    temp = max(num1, num2);
    int maxValue = max(temp,num3);

    temp = min(num1, num2);
    int minValue = min(temp,num3);

    cout << minValue <<" " << maxValue;

    return 0;
}