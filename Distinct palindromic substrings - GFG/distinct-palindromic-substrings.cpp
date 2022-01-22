// { Driver Code Starts
// C++ program to find all distinct palindrome sub-strings
// of a given string
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
  public:
    int palindromeSubStrs(string S) {
        // code here
        int N = S.size();
        bool dp[N][N], ctr = 0;
        memset(dp,false,sizeof(dp));
        for(int gap=0; gap<N; gap++){
            for(int i=0,j=gap; j<N; i++,j++){
                if(gap == 0){
                    dp[i][j] = true;
                }
                else if(gap == 1){
                    if(S[i] == S[j]){
                        dp[i][j] = true;
                        ctr+=1;
                    }
                    else{
                        dp[i][j] = false;
                    }
                }
                else{
                    if(S[i] == S[j] and dp[i+1][j-1] == 1){
                        dp[i][j] = true;
                        ctr+=1;
                    }
                    else{
                        dp[i][j] = false;
                    }
                }
            }
        }
        //print all the palindromic substring....
        unordered_set<string>unique_strings;
        for(int gap = 0; gap < N; gap++){
            for(int i=0, j = gap; j<N; i++, j++){
                if(dp[i][j] == true){
                    int len = (j+1) - i;
                    string res = S.substr(i,len);
                    // string res = S.substr(i,j+1);
                    unique_strings.insert(res);
                }
            }
        }
        return unique_strings.size();
    }
};

// { Driver Code Starts.

// Driver program
int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        cout << ob.palindromeSubStrs(str) << endl;
    }
    return 0;
}
  // } Driver Code Ends