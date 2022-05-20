class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
         int count = 0;
        int n = 0;
        
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] == 1){
                n++;
            }
            else{
                n = 0;
            }
             // keeping track of the max consecutive one count
            count = max(count, n);
        }
        
        return count;
    }
};