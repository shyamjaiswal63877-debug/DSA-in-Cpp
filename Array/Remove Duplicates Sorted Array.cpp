class Solution {
  public:
    vector<int> removeDuplicates(vector<int> &arr) {
        // code here
         int j=1;
        for(int i=1;i<arr.size();i++)
        {
            if(arr[i]!=arr[i-1])
            {
                arr[j]=arr[i];
                j++;
            }
        }
        arr.resize(j);
        return arr;
    }
};