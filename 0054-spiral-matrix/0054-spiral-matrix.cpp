class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;

        //store size of row and col
        int row = matrix.size();
        int col = matrix[0].size();
        
        //initalize index
        int startingRow = 0;
        int startingCol = 0;
        int endingRow = row - 1;
        int endingCol = col - 1;

        int count = 0;
        int totalCount = row * col;

        while(count<totalCount){
        
            //print startingRow
            for(int index=startingCol; count<totalCount && index<=endingCol ; index++){
                ans.push_back(matrix[startingRow][index]);
                count++;
            }
            startingRow++;
            
            //print endingCol
             for(int index=startingRow; count<totalCount && index<=endingRow; index++){
                ans.push_back(matrix[index][endingCol]);
                count++;
            }
            endingCol--;

            //print endingRow
             for(int index=endingCol; count<totalCount && index>=startingCol; index--){
                ans.push_back(matrix[endingRow][index]);
                count++;
            }
            endingRow--;

            //print startingCol
             for(int index=endingRow; count<totalCount && index>=startingRow; index--){
                ans.push_back(matrix[index][startingCol]);
                count++;
            }
            startingCol++;
        
        }
       
        return ans;
    
    }
};