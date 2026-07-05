class Solution {
  public:
    int leastWeightCapacity(vector<int>& arr, int D) {
        // code here
        int n = arr.size();
        int start=*max_element(arr.begin(),arr.end());
        int end =0;
        for(int x:arr)
        end+=x;
        int ans =-1;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            int ships=1;
            int crew=0;
            for(int i =0; i<n; i++)
            {
                if(crew+arr[i]<=mid)
                {
                    crew+=arr[i];
                }
                else
                {
                    ships++;
                    crew=arr[i];
                }
            }
            if(ships<=D)
            {
                ans=mid;
                end=mid-1;
            }
            else
            start=mid+1;
        }
        return ans;
    }
};