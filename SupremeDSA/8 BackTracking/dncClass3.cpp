#include<iostream>
#include<string>

using namespace std; 
void printPermutation(string &str, int n){
    // agar out of bound ho raha hai to print karwa do 
    if(n >= str.length()){
        cout << str << " ";
        return;
    }
    // i wali value pr i aur j honge to j har baar 
    // change hoga aur i bhi aage badgega

    for(int i = n; i<str.length();i++){
        swap(str[i], str[n]);
        printPermutation(str, n+1);
        swap(str[n], str[i]);
    }
}
int main(){
    string str = "abc";
    int i =0;

    printPermutation(str, i);

    return 0;
}
