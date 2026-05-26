class Solution {
public:	
    vector<vector<int> > powerSet(vector<int>& nums) {
        //your code goes here
        vector<vector<int>>ans;
        int n=nums.size();
        int susbset=1<<n;

        for(int idx=0;idx<susbset;idx++)
        {
            vector<int>store;
            for(int idy=0;idy<n;idy++)
            {
                if(idx & (1<<idy))
                {
                    store.push_back(nums[idy]);
                }
            }
            ans.push_back(store);
        }
        return ans;
    }
};