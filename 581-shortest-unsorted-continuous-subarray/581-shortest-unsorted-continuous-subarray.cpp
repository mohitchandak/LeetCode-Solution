class Solution {
public:
    int findUnsortedSubarray(vector<int>& A) {
       
    int left=0;
    int right=A.size()-1;
    int n=A.size();
    while(left+1<n && A[left]<=A[left+1])
    {
        left++;
    }
    if(left==n-1)
    {
        return 0;
    }
    while(A[right]>=A[right-1])
    {
        right--;
    }
    
    int maxm=INT_MIN,minm=INT_MAX;
    int i;
    for(i=left;i<=right;i++)
    {
        maxm=max(maxm,A[i]);
        minm=min(minm,A[i]);
    }
    int s=left;
    int e=right;
    for(i=0;i<left;i++)
    {
        if(A[i]>minm)
        {
            s=i;
            break;
        }
    }
    for(i=n-1;i>e;i--)
    {
        if(A[i]<maxm)
        {
            e=i;
            break;
        }
    }
    return e-s+1;      
    }
};