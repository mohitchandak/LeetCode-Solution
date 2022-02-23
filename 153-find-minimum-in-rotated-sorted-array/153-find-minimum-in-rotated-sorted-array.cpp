class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0;
        int hi = nums.size()-1;
        while(low<hi){
          int mid = (low+hi)/2;
           if(nums[mid]<nums[hi]){
               hi = mid;
           }
            else{
                low = mid+1;
            }
        }
        return nums[low];
        
    }
};