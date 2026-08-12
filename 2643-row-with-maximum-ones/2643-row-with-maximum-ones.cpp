class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int max_row = 0;
        int max_1s = 0;
        for(int i=0; i<mat.size(); i++){
            int count = 0;
            for(int j=0; j<mat[0].size(); j++){
                if( mat[i][j] == 1){
                    count ++;
                }
            }
            if( count > max_1s){
                max_row = i;
                max_1s = count;
            }
        }
        return {max_row , max_1s};
    }
};