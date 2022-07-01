// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

vector<int> find(int arr[], int n , int x )
{
    int first = -1;
    int last = -1;
    vector<int> ans;
    for(int i=0;i<n;i++){
        if(arr[i] == x){
            first = i;
            int j = i+1;
            while(arr[j] == x){
                last = j;
                j++;
            }
            if(last == -1){
                last = first;
            }
            break;
        }
    }
    ans.push_back(first);
    ans.push_back(last);
    return ans;
}

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}


  // } Driver Code Ends