#include<iostream>
#include<string>
#include<vector>

using namespace std;

int houseRobber(vector<int>&nums){
    
}
bool checkSorted(int arr[], int size, int index){
    if(size-1 == index){
        return true;
    }
    bool currAns = false;
    bool finalAns = false;

    if(arr[index] < arr[index+1]){
        currAns = true;
    }
    finalAns = checkSorted(arr,size,index+1);
    return (currAns && finalAns);
}

void printSubstring(string str, int i, string output,vector<string>& myvec){
    if(i == str.length()){
        myvec.push_back(output);
        return;
    }
    char ch = str[i];
    printSubstring(str,i+1,output+ch,myvec);
    printSubstring(str,i+1,output,myvec);
}
int main(){
    // int arr[] = {1,2,3,4,5,6};
    // int size = 6;
    // int index =0;
    // int ans = checkSorted(arr,size,index);
    // (ans == 1)?cout << "true" : cout << "false" << endl;


    string str = "abc";
    string output = "";
    vector<string>myVec;
    printSubstring(str,0,output,myVec);

    cout << myVec.size() << endl;
    return 0;

}