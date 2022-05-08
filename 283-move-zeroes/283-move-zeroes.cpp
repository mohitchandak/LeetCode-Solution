// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
//       int j=0;
//         for(int i=0; i<nums.size(); i++){
//             if(nums[i]!=0)
//                 swap(nums[j++], nums[i]);
//         }
//     }
// };



// here we are calculation no of zero peresent in array 
// and then appending in fcrom back . 


class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count = 0, index = 0;
       int n = nums.size();
       for(int i = 0; i <nums.size(); i++) {
           if(nums[i] == 0)
               count++;
           else {
               nums[index] = nums[i];
               index++;
               
           }
       }
       
       while(count > 0) {
           nums[--n] = 0;
           count--;
           
       }
	}
        
};