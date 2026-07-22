class Solution {
    int solve(int n , vector<int>&coins , int amount , vector<vector<int>>&dp){
if(amount==0){
    return 0;
}

if(n==0){
   if(amount % coins[0] == 0)
                return amount / coins[0];

            return INT_MAX-1;
}


if(dp[n][amount]!=-1){
    return dp[n][amount];
}

int nottake= solve(n-1, coins , amount , dp);

int take =INT_MAX;
if(coins[n]<=amount){
     take = 1+ solve(n, coins , amount-coins[n], dp);
}
return dp[n][amount]= min(take , nottake);
    }
public:
    int coinChange(vector<int>& coins, int amount) {
        int n =coins.size();

        vector<vector<int>>dp(n , vector<int>(amount+1,-1));
        int ans = solve(n-1, coins, amount, dp);

        if(ans >= INT_MAX - 1)
            return -1;

        return ans;
    }
};