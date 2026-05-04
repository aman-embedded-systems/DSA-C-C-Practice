class Solution {
public:
    vector<int> leaders(vector<int>& nums) {
        vector<int>result;
        int arraySize=nums.size();
        if(arraySize>1)
        {
            for(int idx=0;idx<nums.size();idx++)
        {
            if(nums[idx]<nums[idx+1])
            {
                //Do nothing
            }
            else
            {
                //if(result.back()!=nums[idx])
                if (result.empty() || result.back() != nums[idx])
                {
                    result.push_back(nums[idx]);
                }
                
            }
        //result.push_back([nums[nums.size()-1]]);
        }
        }
        
       if(arraySize==1)
        {
            result.push_back(nums[arraySize-1]);
        }
        else
        {
          if (result.empty() || result.back() != nums[arraySize-1])
          {
             result.push_back(nums[arraySize-1]);
          }
           
        }
      return result;
    }
};