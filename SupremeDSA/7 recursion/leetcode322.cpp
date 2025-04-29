#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:
        int solve(vector<int>& coins, int amount) {
            if(amount == 0){
                return 0;
            }
            // minimum coins 
            int minCoinAns = INT_MAX;
            // har amout ke liye pure coins ke array ko traverse kar rahe 
            for(int i =0;i<coins.size();i++){
                int amt = amount;
                int coin = coins[i];
                if(coin <= amount){
                    int recursion = solve(coins,amt-coin); 
                    if(recursion != INT_MAX){
                        int coinused = 1+recursion;
                        minCoinAns = min(minCoinAns,coinused);
                    }
                }
            }
            return minCoinAns;
        }

        int coinChange(vector<int>& coins, int amount) {
            int ans = solve(coins,amount);
            if(ans == INT_MAX){
                return -1;
            }
            return ans;
        }
    };