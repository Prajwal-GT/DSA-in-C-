class Solution {
  public:
    int minTime(vector<int>& arr, int k) {
        // code here
    int n = arr.size();
    long long start=*max_element(arr.begin(), arr.end());
    long long end =0;
    for(int x:arr)
    end+=x;
    long long ans=-1;
    while(start<=end)
    {
        long long mid=start+(end-start)/2;
        int painter =1;
        long long paint =0;
        for(int i =0; i<n; i++)
        {
            if(paint+arr[i]<=mid)
            {
            paint+=arr[i];
            }
        
        else
        {
        painter++;
        paint=arr[i];
        }
    }
    if(painter<=k)
    {
        ans=mid;
        end=mid-1;
    }
    else
    {
    start=mid+1;
    }
    }
    return ans;
    
    }
};