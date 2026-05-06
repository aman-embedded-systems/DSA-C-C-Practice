class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        vector<int>matrixResult;
        int top=0;
        int left=0;
        int bottom= matrix.size()-1;
        int right= matrix[0].size()-1;
        
        while(top<=bottom && left<=right)
        {
            for(int idx=left;idx<=right;idx++)
            {
                matrixResult.push_back(matrix[top][idx]);
            }
            top++;
            for(int idy=top;idy<=bottom;idy++)
            {
                matrixResult.push_back(matrix[idy][right]);
            }
            right--;
            if(top <= bottom)
            {
             for(int idx=right;idx>=left;idx--)
            {
                matrixResult.push_back(matrix[bottom][idx]);
            }
            bottom--;
            }
            if(left <= right)
            {
             for(int idx=bottom;idx>=top;idx--)
            {
                matrixResult.push_back(matrix[idx][left]);
            }
            left++;
            }


        }
        
       return matrixResult;
    }
};