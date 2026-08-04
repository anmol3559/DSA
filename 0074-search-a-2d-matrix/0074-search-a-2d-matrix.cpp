class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       int mRow = matrix.size();
       int nCol = matrix[0].size();
        int start = 0;
        int end = (mRow * nCol) - 1;
        int mid = start + (end - start)/2;

        while(start<=end){
            int element = matrix[mid/nCol][mid%nCol];

            if( element == target ){
                return 1;
            }
            else if(element < target){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
            mid = start + (end - start)/2;
        }
        return 0;
    }
};