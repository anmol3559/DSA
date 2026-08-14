class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int left = 0;
        for(int right = left + 1; right<nums.size(); right++){
            if(nums[right]%2 == 0 && nums[left] != 0){
                swap(nums[left] , nums[right]);
                left++;
            }
            else if(nums[left]%2 == 0) left++;
        }
        return nums;
    }
};