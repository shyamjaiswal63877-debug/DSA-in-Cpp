class Solution {
  public:
    bool checkDuplicatesWithinK(vector<int>& arr, int k) {
        // your code
        unordered_set<int>x;
        for(int i=0;i<arr.size();i++)
        {
            if(x.find(arr[i])!=x.end())
            {
                return true;
            }
            x.insert(arr[i]);
            if(x.size()>k)
            {
                x.erase(arr[i-k]);
            }
        }
        return false;
    }
};