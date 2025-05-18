#include<iostream>
#include<string>
#include<vector>
#include<climits>

using namespace std;

class Solution {
public:
    int printMaxRob(vector<int>&nums, int size, int index){
        if(index >= size){
            return 0;
        }
        int includeSum = nums[index] + printMaxRob(nums,size,index+2);
        int excludeSum = 0 + printMaxRob(nums,size, index+1);

        return max(includeSum, excludeSum);
    }
    int rob(vector<int>& nums) {
        int index = 0;
        int size = nums.size();
        int ans = printMaxRob(nums,size,index);
        return ans;
    }
};

class Solution{
    public:
        int solve(vector<int>&coins, int amount){
            int minCoin = INT_MAX;
            if(amount == 0){
                return 0;
            }
            for(int i =0; i<coins.size();i++){
                int coin = coins[i];

                if(coin <= amount){
                    int recursion = solve(coins, amount - coin);
                    if(recursion != INT_MAX){
                        int totalCoin = 1+ recursion;
                        minCoin = min(totalCoin, minCoin);
                    }
                }
            }
            return minCoin;
        }
        int coinChange(vector<int>&coins, int amount){
            int ans = solve(coins, amount);
            if(ans == INT_MAX){
                return -1;
            }
            return ans;
        }
};


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