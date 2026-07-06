
class Solution {
  public:
    int aggressiveCows(vector<int> &stall, int k) {
        // code here
        int cows;
        sort(stall.begin(), stall.end());
        int n = stall.size();
        int start=-1;
        int end=stall[n-1]-stall[0];
        int ans=-1;
        while(start<=end)
        {
           int mid=start+(end-start)/2;
            int cows=1;
            int pos=stall[0];
            for(int i =1; i<n; i++)
            {
                if(stall[i]-pos>=mid)
                {
                cows++;
                pos=stall[i];
                if(cows>=k)
                break;
                }
            }
        if(cows>=k)
        {
            ans=mid;
            start=mid+1;
        }
        else
        {
        end=mid-1;
        }
        }
        return ans;
    }
};