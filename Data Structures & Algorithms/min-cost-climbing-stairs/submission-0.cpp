class Solution {
public:
    
    int recur(vector<int>& dp, int i, int n, vector<int>& cost){
        if(i>=n) return 0;
        if(dp[i]!=-1) return dp[i];
        dp[i] = cost[i] + min(recur(dp,i+1,n, cost), recur(dp,i+2,n,cost));
        return dp[i];
    }
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> dp(cost.size(),-1);
        return min(recur(dp, 0, cost.size(), cost),
               recur(dp, 1, cost.size(), cost));

    }
};
