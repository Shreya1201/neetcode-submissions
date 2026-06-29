class Solution {
public:
    int trap(vector<int>& height) {
        int area = 0;
        vector<int> prefix;
        vector<int> suffix(height.size());
        int maxl = 0, maxr=0;
        for(int i=0;i<height.size();i++){
            maxl = max(height[i],maxl);
            prefix.push_back(maxl);
        }
        for(int i=height.size()-1;i>=0;i--){
            maxr = max(height[i],maxr);
            suffix[i] = maxr;
        }
        for(int i=0;i<height.size();i++){
            area += min(prefix[i],suffix[i])-height[i];
        }
        return area;
    }
};
