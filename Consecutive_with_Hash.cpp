class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
#if 0
        int n = nums.size();
        int Count = 1;
        int CountMax = 1;
        sort(nums.begin(), nums.end());
        if (n <2) {
            return n;
        }
        for (int idx = 0; idx < n - 1; idx++) {
            int Difference = abs(nums[idx + 1] - nums[idx]);
            abs(Difference);
            if (Difference == 0) {
                continue;
            }
            if ((Difference == 1)) {
                Count++;

            } else {
                Count = 1;
            }
            CountMax = max(Count, CountMax);
        }
        return CountMax;
#endif
    int n= nums.size();
    unordered_set<int>st;
    int Max=1;
    for(int idx=0;idx<n;idx++)
    {
        st.insert(nums[idx]);
    }
    for(auto it:st)
    {
        if(st.find(it-1)==st.end())
        {
            int cnt=1;
            int x=it;
            while(st.find(x+1)!=st.end())
            {
                x=x+1;
                cnt=cnt+1;
            }
            Max=max(Max,cnt);
        }
    }
    return Max;
    }
};