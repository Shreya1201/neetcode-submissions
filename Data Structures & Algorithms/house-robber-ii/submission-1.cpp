class Solution {
public:
    int recur(vector<int>& dp, int i, vector<int>& nums, int n){
        if(i>=n) return 0;
        if(dp[i]!=-1) return dp[i];
        int pick = nums[i] + recur(dp,i+2, nums, n);
        int notpick = recur(dp,i+1, nums, n);
        dp[i] = max(pick, notpick);
        return dp[i];
    }
    int rob(vector<int>& nums) {
        if (nums.size() == 1)
            return nums[0];
        vector<int> dp1(nums.size(),-1);
        vector<int> dp2(nums.size(),-1);
        return max(recur(dp1, 0, nums, nums.size()-1), recur(dp2, 1, nums, nums.size()));
    }
};
