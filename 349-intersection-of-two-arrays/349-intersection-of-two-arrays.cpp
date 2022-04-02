class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector <int> ans;
        set<int>s1,s2;
        for(auto i:nums1){
            s1.insert(i);
        }
        for(auto j:nums2){
            s2.insert(j);
        }
       for(auto j:s1){
            if(s2.find(j)!=s2.end())
                ans.push_back(j);
        }
       return ans; 
    }
};




        