class Solution {
public:
    int findMaxForm(vector<string>& strs, int m, int n) {
         int len = strs.size();
        
        vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
        for(int i = 0; i < len; i++)
        {
            int ones = count(strs[i].begin(), strs[i].end(), '1');
            int zeros= strs[i].size() - ones;
            
            for (int i = m; i >= zeros; i--) 
                for (int j = n; j >= ones; j--)
                    dp[i][j] = max(dp[i][j], dp[i - zeros][j - ones] + 1); 
        }
        return dp[m][n];
        
    }
};