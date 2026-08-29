class Solution {
public:
    int minBishopMoves(vector<int>& source, vector<int>& target) {
        int source_row = source[0], source_col = source[1];
        int target_row = target[0], target_col = target[1];

        //at target
        if(source_row == target_row && source_col == target_col){
            return 0;
        }
        //diff color
        else if( (source_row + source_col)%2 != (target_row + target_col)%2){
            return -1;
        }
        // same diagonal
        else if( abs(source_row - target_row) == abs(source_col - target_col) ){
            return 1;
        }
        else{
            return 2;
        }
    }
};