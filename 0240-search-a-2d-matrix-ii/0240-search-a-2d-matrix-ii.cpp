class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int start = 0;
        int end = matrix[0].size() - 1;

        while(start<matrix.size() && end>=0){
            int element = matrix[start][end];
            if( element == target){
                return 1;
            }
            else if( element < target){
                start ++;
            }
            else{
                 end -- ;
            }
        }
        return 0;
    }
};