class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       int wArraysize=nums.size();
       int TempIndex=0;
       for(int byIndex=0;byIndex<wArraysize;byIndex++)
       {
            if(nums[byIndex]!=0)
            {
                nums[TempIndex]=nums[byIndex];
                TempIndex++;
            }
            
       }
       for(int byIndexCount=TempIndex;byIndexCount<wArraysize;byIndexCount++)
       {
            nums[byIndexCount]=0;
       }
        
    }
};