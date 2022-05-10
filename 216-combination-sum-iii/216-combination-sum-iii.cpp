class Solution {
private:
    void solve(int idx, int k, int target, vector<int>&temp, vector<vector<int>>&ans){
        //base case
        if(temp.size() == k && target == 0){
            ans.push_back(temp);
            return;
        }
        for(int i = idx;i<=9;i++){
            //all unique
                temp.push_back(i);
                solve(i+1,k,target-i,temp,ans);
                temp.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>temp;
        vector<vector<int>>ans;
        solve(1,k,n,temp,ans);
        return ans;
    }
};