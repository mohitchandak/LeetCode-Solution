class Solution {
public:
    int missingNumber(vector<int>& nums) {
int l=nums.size();
int s1=(l*(l+1))/2;
int s2=accumulate(nums.begin(), nums.end(), 0);;

    return s1-s2;
}
};