class Solution {
public:
    int countOrders(int n) {
       long sum = 1, modulo = 1000000007;
        for(int i = 1; i <=n; ++i)
        {
            sum *= i;
            sum %= modulo;
            sum *= (2*i-1);
            sum %= modulo;
        }
        
        return sum % modulo; 
    }
};