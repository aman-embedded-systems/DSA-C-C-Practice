// #include <unordered_map>
class Solution {
   public:
    vector<int> majorityElementTwo(vector<int>& nums) {
#if 0
        unordered_map<int, int> MajorityFreq;
        vector<int> MajorityElementStore;
        int n = nums.size();

        int MajorityLength = n / 3;

        for (int idx = 0; idx < n; idx++) {
            MajorityFreq[nums[idx]]++;
        }
        for (auto xy : MajorityFreq) {
            if (xy.second > MajorityLength) {
                MajorityElementStore.push_back(xy.first);
            }
        }
        return MajorityElementStore;
#endif 
#if 1
         vector<int> ans;

        int n = nums.size();

        sort(nums.begin(), nums.end());

        int count = 1;

        for(int i = 1; i < n; i++)
        {
            if(nums[i] == nums[i-1])
            {
                count++;
            }
            else
            {
                // Check previous element frequency
                if(count > n/3)
                {
                    ans.push_back(nums[i-1]);
                }

                count = 1;
            }
        }

        // Last element/group check
        if(count > n/3)
        {
            ans.push_back(nums[n-1]);
        }

        return ans;
#endif 
    

    }
};