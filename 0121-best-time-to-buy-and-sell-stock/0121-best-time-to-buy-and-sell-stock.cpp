class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int size=prices.size()-1;
        int maxr=prices[size];
        int maxd=0;
        for(int i =size-1;i>=0;i--){
            int diff=maxr-prices[i];
            maxd=max(diff,maxd);
            maxr=max(maxr,prices[i]);
        }
        return maxd;
    }
};