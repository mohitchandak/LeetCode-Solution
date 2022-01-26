class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size()<3){
            return false;
        }
        int i=0,n=arr.size();
        while(i+1<n){
            if(arr[i]<arr[i+1]){
                i++;
                continue;
            }
            else{
                break;
            }
        }
        if(i==0 || i==n-1){
            return false ;
        }
        while(i+1<n){
            if(arr[i]>arr[i+1]){
                i++;
                continue;
            }
            else{
                break;
            }
        }
        return i==(n-1);
    }
};