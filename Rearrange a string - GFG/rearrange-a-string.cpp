// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
  public:
   string arrangeString(string str)
    {
        int sum=0;
        //code here.
        string ss="";
        for(int i=0;i<str.size();i++){
            if(str[i]>='0' && str[i]<='9'){
                sum+=str[i]-'0';
            }else{
                ss+=str[i];
            }
        }
        sort(ss.begin(),ss.end());
        ss+=to_string(sum);
        return ss;
        
        
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout <<ob.arrangeString(s) << endl;
    }
return 0;
}

  // } Driver Code Ends