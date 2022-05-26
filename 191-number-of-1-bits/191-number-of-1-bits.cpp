class Solution {
public:
    int hammingWeight(uint32_t n) {
        int ans = 0;
        while(n > 0)
        {
            n = n & (n-1);
            ans++;;
        }
        return ans;
    
    }
};

// class Solution {
// public:
//     int hammingWeight(uint32_t n) {
//         //return __builtin_popcount(n); //returns number of set bits in n.
//           }
// };
