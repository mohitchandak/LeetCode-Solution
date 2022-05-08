// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
   // Sort the given packets 
        sort(a.begin(),a.end());
		
		long long start = 0,end =0;
		// Largest number of chocolates 
		long long mind = LONG_LONG_MAX;
		
		// Find the subarray of size m such that 
        // difference between last (maximum in case 
        // of sorted) and first (minimum in case of 
        // sorted) elements of subarray is minimum.
		for(long long i=0;i+m-1<n;i++)
		{
			long long diff = a[i+m-1] - a[i];
			if(mind>diff)
			{
				mind = diff;
				// start = i;
				// end = i+m-1;
			}
		}
		return mind;
            
    }
};

// { Driver Code Starts.
int main() {
	long long t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		vector<long long> a;
		long long x;
		for(long long i=0;i<n;i++)
		{
			cin>>x;
			a.push_back(x);
		}
		
		long long m;
		cin>>m;
		Solution ob;
		cout<<ob.findMinDiff(a,n,m)<<endl;
	}
	return 0;
}  // } Driver Code Ends