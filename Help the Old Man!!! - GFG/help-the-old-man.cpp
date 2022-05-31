// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
   void help(vector<pair<int,int> > &ans,int N,int p1,int p2,int p3){
       if(N>0){
           help(ans,N-1,p1,p3,p2);
           ans.push_back({p1,p3});
           help(ans,N-1,p2,p1,p3);
       } 
   }
   vector<int> shiftPile(int N, int n){
       // code here
       vector<pair<int,int> > ans;
       vector<int> u;
       help(ans,N,1,2,3);
       u.push_back(ans[n-1].first);
       u.push_back(ans[n-1].second);
       return u;
   }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, n;
        cin>>N>>n;
        
        Solution ob;
        vector<int> ans = ob.shiftPile(N, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}  // } Driver Code Ends