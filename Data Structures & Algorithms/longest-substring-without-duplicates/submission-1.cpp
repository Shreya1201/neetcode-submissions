class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> a;
        int i=0, j=0, len=0;
        while(i<s.size() && j<s.size()){
            if(a.count(s[j])){
                while(a.count(s[j])){
                    a.erase(s[i]);
                    i++;
                }
            } else{
                a.insert(s[j]);
                len = max(len, j - i + 1);
                j++;
            }
        }
        return len;
    }
};
