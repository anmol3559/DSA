class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans_positive;
        vector<int> ans_negative;
        vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            if( nums[i] > 0){
                ans_positive.push_back(nums[i]);
            }
            else{
                ans_negative.push_back(nums[i]);
            }
        }
        int pos_index = 0;
        int neg_index = 0;
        for(int i=0; i<nums.size(); i++){
            if( i%2 == 0 || i == 0){
                ans.push_back(ans_positive[pos_index]);
                pos_index++;
            }
            else{
                 ans.push_back(ans_negative[neg_index]);
                neg_index++;
            }
        }
        return ans;
    }
};