class Solution {
  public:
    bool isSorted(vector<int>&arr,int n)
    {
        if(n==0 || n==1)
        {
            return true;
        }
        if(arr[n-1]>arr[n])
        {
            return false;
        }
        return isSorted(arr,n-1);
    }
    bool isSorted(vector<int>& arr) {
        // code here
        // recursive Code
        
        return isSorted(arr,arr.size()-1);
    }
};