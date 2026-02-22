// User function Template for C++
class Solution {
  public:
    vector<vector<int>>ans;
    void getSub(vector<int>&arr,int start)
    {
        if(start==arr.size())
        {
            return ;
        }
        vector<int>temp;
        for(int i=start;i<arr.size();i++)
        {
            temp.push_back(arr[i]);
            ans.push_back(temp);
        }
        getSub(arr,start+1);
    }
    vector<vector<int> > getSubArrays(vector<int>& arr) {
        // code here
        getSub(arr,0);
        return ans;
    }
};