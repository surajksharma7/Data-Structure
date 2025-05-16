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

int returnPower(int pow){
    if(pow == 1){return 1;}
    int power = returnPower(pow-1);
    int finalAns = 2*power;
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
    // counting from n to 1 
    // int n ;
    // cout << "Enter number to print counting : ";
    // cin>> n;
    // printInvCounting(n);


    // -----------------------------------------------------------------------
    // counting from n to 1 
    int n ;
    cout << "Enter number to print counting : ";
    cin>> n;
    printInvCounting(n);


    return 0;
}