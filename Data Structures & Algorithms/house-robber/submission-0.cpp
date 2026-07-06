class Solution {
public:
    int recur(vector<int>& dp, int i, vector<int>& nums){
        if(i>=nums.size()) return 0;
        if(dp[i]!=-1) return dp[i];
        int pick = nums[i] + recur(dp,i+2, nums);
        int notpick = recur(dp,i+1, nums);
        dp[i] = max(pick, notpick);
        return dp[i];
    }
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size(),-1);
        return recur(dp, 0, nums);
    }
};
