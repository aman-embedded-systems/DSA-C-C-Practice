class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>mergeArray(nums.size());
        int positiveIndex=0;
        int negativeIndex=1;
        for(int idx=0;idx<nums.size();idx++)
        {
            if(nums[idx]>=0)
            {
                mergeArray[positiveIndex]=nums[idx];
                positiveIndex+=2;
            }
            else
            {
                 mergeArray[negativeIndex]=nums[idx];
                 negativeIndex+=2;

            }
        }

    return mergeArray;
        
    }
};