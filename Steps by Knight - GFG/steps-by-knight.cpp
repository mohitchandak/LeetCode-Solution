// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution 
{
    public:
     int X[8] = {1 , 1 , 2 , 2 , -1 , -1 , -2 , -2};
    int Y[8] = {2 , -2 , 1 , -1 , 2 , -2, -1 , 1};
	int minStepToReachTarget(vector<int>&KnightPos,vector<int>&TargetPos,int N)
	{
	    int C = KnightPos[0] , D = KnightPos[1];
	    int E = TargetPos[0] , F = TargetPos[1];
    	int visited[N+1][N+1] = {0};

       queue<array<int,3>>q;
       q.push({C,D,0});
       visited[C][D] = 1;

       while(q.size() != 0)
      {
         array<int,3> alpha = q.front();
         int x = alpha[0] , y = alpha[1] , ct = alpha[2];
         q.pop();

         if(x == E && y == F)
         {
            return ct;
         }

         for(int i=0;i<8;i++)
         {
            int nwx = X[i] + x;
            int nwy = Y[i] + y;

            if(nwx >= 1 && nwy >= 1 && nwx <= N && nwy <= N && !visited[nwx][nwy])
            {
                visited[nwx][nwy] = 1;
                q.push({nwx,nwy,ct+1});
            }
        }
      }

      return -1;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		vector<int>KnightPos(2);
		vector<int>TargetPos(2);
		int N;
		cin >> N;
		cin >> KnightPos[0] >> KnightPos[1];
		cin >> TargetPos[0] >> TargetPos[1];
		Solution obj;
		int ans = obj.minStepToReachTarget(KnightPos, TargetPos, N);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends