class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       int wArraysize=nums.size();
       int TempIndex=0;
       for(int byIndex=0;byIndex<wArraysize;byIndex++)
       {
            if(nums[wArraysize]!=0)
            {
                nums[TempIndex]=nums[wArraysize];

            }
            else
            {
                TempIndex++;
            }
            
       }
    //    for(int byIndexCount=wArraysize-TempIndex;byIndexCount<wArraysize;byIndexCount++)
    //    {
    //         nums[byIndexCount]=0;
    //    }
        
    }
};