class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxp = 0,leftmin=prices[0];
        for(int i=1;i<prices.size();i++){
            maxp = max(prices[i]-leftmin,maxp);
            leftmin=min(leftmin,prices[i]);
        }
        return maxp;
    }
};
