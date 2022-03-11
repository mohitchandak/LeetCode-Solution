class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minp=INT_MAX, ans=0;
        
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]<minp)
                minp=prices[i];
            else
                ans=max(ans,prices[i]-minp);
        }
        return ans;
    }
};