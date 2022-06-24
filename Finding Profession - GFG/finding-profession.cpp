// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
  public:

    /* Function to get no of set bits in binary
        representation of passed binary no. */
    int countSetBits(int n)
    {
        int count = 0;
        while (n)
        {
          n &= (n-1) ;
          count++;
        }
        return count;
    }
    
    char profession(int level, int pos){
        // Count set bits in 'pos-1'
        int c = countSetBits(pos-1);
     
        // If set bit count is odd, then doctor, else engineer
        return (c%2)?  'd' : 'e';
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int level, pos;
        cin>>level>>pos;
        
        Solution ob;
        if(ob.profession(level, pos) == 'd')
            cout<<"Doctor\n";
        else
            cout<<"Engineer\n";
    }
    return 0;
}  // } Driver Code Ends