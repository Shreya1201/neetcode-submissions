class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int longest =0;
        unordered_set<int> s(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(!s.count(nums[i]-1)){
                int len=1;
                int c=nums[i];
                while(s.count(c+1)){
                    len++;
                    c++;
                }
                longest = max(longest, len);
            }
        }
        return longest;
    }
};
