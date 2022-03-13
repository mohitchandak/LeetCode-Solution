class Solution {
public:
    int trailingZeroes(int n) {
        int sum = 0, q = 0;
        while(n!=0){
      q= n/5;
        sum += q;
        n = n/5;
    }
        return sum;
    }
};