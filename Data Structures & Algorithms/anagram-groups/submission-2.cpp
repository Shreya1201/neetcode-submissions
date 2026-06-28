class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        vector<vector<string>> ans;
        for(int i=0;i<strs.size();i++){
           vector<int> count(26,0);
           for(auto c: strs[i]){
                count[c-'a']++;
           }
           string temp;
           for(int i=0;i<count.size();i++){
                temp += to_string(count[i]) + "#";
           }
           mp[temp].push_back(strs[i]);
        }
        for(auto &it : mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};
