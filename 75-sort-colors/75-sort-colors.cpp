class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int s=0;
        int m=0;
        int h=n-1;
        
        while(m<=h){
            int x = nums[m];
            if(x==0){
               swap(nums[s],nums[m]);
                 s++;
                  m++;
               }
            else if(x==1){
                m++;
            }
                else{
                    swap(nums[h],nums[m]);
                        h--;
            }
        }
    } 
        

};