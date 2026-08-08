class Solution {
public:
    int smallestRangeII(vector<int>& nums, int k) {
    
    if( nums.size() == 1) return 0;

    sort(nums.begin() , nums.end());
    int ans = nums[nums.size() - 1] - nums[0];

    int mini , maxi;
    for(int i=1; i<nums.size(); i++){
      
        mini = min( nums[0] + k , nums[i] - k);
        maxi = max( nums[nums.size() - 1] - k , nums[i-1] + k);

        ans = min( ans , maxi - mini);
    }

    return ans;

    }
};