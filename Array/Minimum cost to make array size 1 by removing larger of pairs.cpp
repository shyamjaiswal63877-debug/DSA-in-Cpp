// User function Template for C++
class Solution {
  public:

    int cost(vector<int>& arr) {
        // code here
        if(arr.size()==1)
        {
            return 0;
        }
        int cost=0;
        int miniCount=0;
        int mini=*min_element(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]==mini)
            {
                miniCount++;
            }
            if(arr[i]>mini)
            {
                cost+=mini;
            }
            else if(arr[i]==mini&&miniCount>1)
            {
                cost+=mini;
            }
        }
        return cost;
    }
};