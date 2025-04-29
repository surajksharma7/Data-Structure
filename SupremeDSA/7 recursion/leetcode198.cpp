#include<iostream>
#include<vector>
using namespace std;

class soulution{

	public:	
		int solve(vector<int>&nums,int n , int i){
			if (i >= n){
				return 0;
			}
			int includeAns = nums[i]+solve(nums,n,i+2);
			int ans1 = 0 + solve(nums,n,i+1);

			int finalAns = max(includeAns,ans1);
		}
		int rob(vector<int>&nums){
			int index = 0;
			int ans = solve(nums,nums.size(),index );
			return ans;
		}
};


class solution{
    public:
        int solve(vector<int>&nums,int n , int i){
            if(i >= nums.size()){
                return 0;
            }
            int includeAns = nums[i]  + solve(nums,n,i+2);
            int excludeAns = 0 + solve(nums,n,i+1);

            int finalAns = max(includeAns,excludeAns);
            return finalAns;
        }
        int rob(vector<int>&nums){
            int index = 0;
            int ans = solve(nums,nums.size(),index);
            return ans;
        }
};

