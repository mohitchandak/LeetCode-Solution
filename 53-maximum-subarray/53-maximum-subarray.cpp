class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    int n = nums.size();
            
    int  res = nums[0];
    int maxs = nums[0];
    
    for(int i=1;i<n;i++){
     maxs = max(maxs+nums[i],nums[i]);
     res = max(maxs , res);
    }
    return res;
        
    }
};