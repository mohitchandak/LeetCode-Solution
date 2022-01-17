// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++

class Solution{   
  public:
    // Function to check if a palindrome pair exists
   bool isPalindrome(string str){
       int i=0, j = str.size()-1;
       while(i < j){
           if(str[i] != str[j]) return (false);
           i++, j--;
       }
       return (true);
   }
   
   bool helper(int N,string arr[]){
       unordered_map<string,int> mp;
       for(int i=0; i<N; i++){
           string str = arr[i];
           reverse(str.begin(),str.end());
           mp[str] = i;
       }
       
       for(int i=0; i<N; i++){
           string str = arr[i];
           for(int j=0; j<str.size(); j++){
               string pref = str.substr(0,j), suff = str.substr(j);
               if(isPalindrome(pref)){
                   if(mp.count(suff) && mp[suff] != i) return (true);
               }
               
               if(isPalindrome(suff)){
                   if(mp.count(pref) && mp[pref] != i) return (true);
               }
           }
       }
       return (false);
   }
   
   bool palindromepair(int N, string arr[]) {
       if(helper(N,arr)) return (true);
       return (false);
   }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        string arr[N];
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }

        Solution ob;
        cout << ob.palindromepair(N, arr) << endl;
    }
    return 0; 
} 
  // } Driver Code Ends