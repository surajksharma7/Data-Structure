#include<vector>
#include<iostream>


//  leetcode question 416 
class Solution {
public:
    bool solve(vector<int>&nums, int target, int index){
        if(index == nums.size() || target < 0){
            return false;
        }
        if(target == 0){
            return true;
        }

        bool inc = solve(nums,target-nums[index],index+1);
        bool exc = solve(nums,target,index+1);

        return inc || exc;
    }
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for(int i =0;i<nums.size();i++){
            sum += nums[i];
        }

        if(sum & 1){
            return false;
        }
        int target = sum/2;
        return solve(nums,target,0);
    }
};


//  leetcode question ->

class Solution{

public:
    void solve(vector<vector<int>>&mat, int target, int sum, int row, int &mini){
        if(row == mat.size()){
            mini = min(mini, abs(target - sum));
            return;
        }

        for(int i = 0 ; i < mat[row].size();i++){
            solve(mat, target,sum+mat[row][i],row+1,mini);
        }
    }

    int minimizeTheDifference(vector<vector<int>>&nums, int target){
        int sum = 0;
        int row = 0;
        int mini = INT_MAX;
        solve(mat, target, sum , row, mini);
        return mini;
    }
};