class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
       int left=0;
        int right=A.size()-1;
        int c=0;
        while(left<A.size())
        {
                if(A[left]%2==1)
                {
                    left++;
                    continue;
                }
            if(A[left]%2==0)
            {
                swap(A[left],A[c]);
                c++;
                left++;
            }
        
        }  
        return A;
        
    }
};