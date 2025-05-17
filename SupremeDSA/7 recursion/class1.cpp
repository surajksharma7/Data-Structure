// when a function call itself then it is called recursion.
// jab ek badi problem ka sollution choti problem pe depend karta
// hai to recurssion use kar skate ha 
// maggical line -> ek case tum solve karo baaki recursion sambhal lega
// components of recurion -> base case -> recursive call -> processing

// recusion mein base case nahi lageyenge to stack overflow ho jyegi aur memory crash

#include<iostream>

using namespace std;

// find the factorial of a number
int factorial(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    int recurssionKaAns = factorial(n-1);
    int finalAns = n * recurssionKaAns;
    return finalAns;
}

void printCounting(int n){
    if(n == 0){
        return;
    }
    cout << n << endl;
    printCounting(n-1);
}

void printInvCounting(int n){
    if(n == 0){
        return;
    }
    printCounting(n-1);
    cout << n << endl;
}

int powerOfValue(int n){
    if(n == 0){
        return 1;
    }
    int ans = 2 * powerOfValue(n-1);
    return ans;
}

int fibonacciSeries(int n ){
    if(n ==  0){
        return 0;
    }
    if(n ==1){
        return 1;
    }
    int ans = (n-1) + (n-2);
    return ans; 
}

int getSum(int n){
    if(n == 1){
        return 1;
    }
    int ans = n+getSum(n-1);
    return ans;
}

int main(){
    // -----------------------------------------------------------------------
    // int n;
    // cout << "Enter the value of n : ";
    // cin>>n;
  
    // int ans = factorial(n);
    // cout << ans << endl;

    // -----------------------------------------------------------------------
    // counting from n to 1 
    // int n ;
    // cout << "Enter number to print counting : ";
    // cin>> n;
    // printCounting(n);

    // -----------------------------------------------------------------------
    // counting from 1 to n 
    // int n ;
    // cout << "Enter number to print counting : ";
    // cin>> n;
    // printInvCounting(n);


    // -----------------------------------------------------------------------
    // counting from n to 1 
    // int n ;
    // cout << "Enter number to print counting : ";
    // cin>> n;
    // printInvCounting(n);


    // -----------------------------------------------------------------------
    // finding power of 2 
    // int n;
    // cout << "enter the power ";
    // cin >> n ;

    // cout << powerOfValue(n) << endl;

    // -----------------------------------------------------------------------
    // fibonacci series

    // -----------------------------------------------------------------------
    // sum of n numbers 
    cout << getSum(10) << endl;

    return 0;
}