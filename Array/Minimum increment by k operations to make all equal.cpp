class Solution {
  public:
    // Function to find minimum operations to make all elements equal.
    int minOps(vector<int> arr, int k) {
        // Your code here
        int maxi=*max_element(arr.begin(),arr.end());
        int mini=0;
        for(int i=0;i<arr.size();i++)
        {
            if((maxi-arr[i])%k!=0)
            {
                return -1;
            }
            else 
            {
               mini=mini+(maxi-arr[i])/k;
            }
        }
        return mini;
    }
};