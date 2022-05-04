class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        
        unordered_map<int,int>mm;
        int i;
        int n=nums.size();
        int ans=0;
        for(i=0;i<n;i++)
        {
            if(mm.find(k-nums[i])!=mm.end() && mm[k-nums[i]]>0)
            {
                mm[k-nums[i]]--;
                ans++;
                
            }
            else
            {
                mm[nums[i]]++;
            }
            
            
        }
            return ans;
        
        
        
        
    }
};