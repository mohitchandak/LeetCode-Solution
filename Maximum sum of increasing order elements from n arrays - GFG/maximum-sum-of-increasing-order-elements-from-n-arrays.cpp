// { Driver Code Starts
// CPP program to find maximum sum
// by selecting a element from n arrays
#include<bits/stdc++.h>

using namespace std;

// To calculate maximum sum by
// selecting element from each array
int maximumSum( int n,int m, vector<vector<int>> &a);



// Driver program to test maximumSum
int main() {
    int t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        vector<vector<int>> arr(n, vector<int>(m,0));
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
            cin>>arr[i][j];
            
        cout << maximumSum(n,m,arr)<<endl;
    
    }
    return 0;

}
// } Driver Code Ends


int maximumSum( int n,int m, vector<vector<int>> &a) {

    // Complete the function
     int upper_l=INT_MAX,i,j,sum=0,temp;
    for(i=n-1;i>=0;i--)
    {
        for(j=0,temp=INT_MIN;j<m;j++)
            if(a[i][j]>temp&&a[i][j]<upper_l)
                temp=a[i][j];
        if(temp!=INT_MIN)
            sum+=upper_l=temp;
        else
            return 0;  
    }
    return sum;
}