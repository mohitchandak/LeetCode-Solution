class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       int n  =   nums.size();
        int a= 0;
       sort(nums.begin(), nums.end());
        for(int i = 1 ;i<n;i++){
            if(nums[i-1] == nums[i]){
                a =  nums[i];
            }
        }
        return a;
    }
};