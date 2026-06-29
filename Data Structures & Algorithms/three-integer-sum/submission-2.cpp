class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        unordered_set<int> s;
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for(int i=0;i<nums.size();i++){
            if(s.count(nums[i])){
                continue;
            }
            int a=i+1,b=nums.size()-1;
            while(a<b){
                int sum = nums[i] + nums[a] + nums[b];
                if(sum==0){
                    ans.push_back({nums[i], nums[a], nums[b]});
                    a++;b--;
                    while (a < b && nums[a] == nums[a - 1])
                        a++;
                    while (a < b && nums[b] == nums[b + 1])
                        b--;
                }
                else if(sum>0){
                    b--;
                } else if(sum<0){
                    a++;
                }
            }
            s.insert(nums[i]);
        }
        return ans;
    }
};
