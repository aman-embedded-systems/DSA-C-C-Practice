class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int size= nums.size();
        int Sumofarray=0;
        int SumofIndex=0;
        int missingnumberarray=0;
        for(int idx=0; idx<nums.size();idx++)
        {
            Sumofarray=Sumofarray+nums[idx];
           //SumofIndex=SumofIndex+idx;  
        }
        SumofIndex= (size*(size+1))/2;
        missingnumberarray=SumofIndex-Sumofarray;
        return missingnumberarray;
    }
};