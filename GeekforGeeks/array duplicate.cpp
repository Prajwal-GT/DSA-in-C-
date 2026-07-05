class Solution {
  public:
    bool checkDuplicates(vector<int> &arr) {
        // code here
        sort(arr.begin() , arr.end());
        for(int i  =1;i<arr.size(); i++)
        {
            if(arr[i]==arr[i-1])
            return true;
        }
            return false;
        
    }
};
