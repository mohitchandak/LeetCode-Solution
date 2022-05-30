// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        // Code here
        int m = matrix.size();
int n = matrix[0].size();
int d[] = {1, 0, -1, 0, 1};
vector<vector<int>> dp(m, vector<int>(n));
queue<pair<int, int>> que;
int ma = 0;

for (int i = 0; i < m; ++i)
	for (int j = 0; j < n; ++j)
	{
		if (dp[i][j])
			continue;
		
		que.push({i, j});
		dp[i][j] = 1;
		
		while (que.size())
		{
			int i = que.front().first;
			int j = que.front().second;
			que.pop();
			
			for (int k = 0; k < 4; ++k)
			{
				int ii = i + d[k];
				int jj = j + d[k + 1];
				
				if (0 <= ii && ii < m && 0 <= jj && jj < n && matrix[i][j] < matrix[ii][jj])
				{
					if (dp[ii][jj] < dp[i][j] + 1)
					{
						dp[ii][jj] = dp[i][j] + 1;
						que.push({ii, jj});
						
						ma = max(ma, dp[ii][jj]);
					}
				}
			}
		}
	}

return ma;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>matrix(n, vector<int>(m, 0));
		for(int i = 0; i < n; i++)
			for(int j = 0; j < m; j++)cin >> matrix[i][j];
		Solution obj;
		int ans = obj.longestIncreasingPath(matrix);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends