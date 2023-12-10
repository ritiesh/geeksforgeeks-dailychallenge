class Solution{
    public:
    bool subArrayExists(int arr[], int n)
    {
        map<int,int>mp;
        int sum=0;
        mp[0]=0;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            if(mp.find(sum)!=mp.end())
            {
                return 1;
            }
            mp[sum]=1;
        }
        return 0;
    }
};

