

class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        // code here
        vector<int>ans;
        ans.push_back(arr[arr.size()-1]);
        int maxi=arr[arr.size()-1];
        for(int i=arr.size()-2;i>=0;i--)
        {
            if(maxi<=arr[i])
            {
                maxi=arr[i];
                ans.push_back(arr[i]);
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};