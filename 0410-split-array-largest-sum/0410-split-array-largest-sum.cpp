class Solution {
    bool largest(vector<int>& nums, int k, int mid){
      int integerCount = 1;
      int nums_sum = 0;
      for(int i=0; i<nums.size(); i++){
        if(nums_sum + nums[i] <= mid){
            nums_sum += nums[i];
        }
        else{
            integerCount++;
            if(integerCount > k || nums[i] > mid ){
                return false;
            }
                nums_sum = nums[i];
        }
      }
      return true;
    }
public:
    int splitArray(vector<int>& nums, int k) {
        int s = 0;
        int sum = 0;
        for(int i=0; i<nums.size(); i++){
            sum += nums[i];
            s = max(s, nums[i]);
        }
        int e = sum;
        int ans = -1;
        while(s <= e){
            int mid = s + (e - s)/2;
            if(largest(nums , k , mid)){
                ans = mid;
                e = mid - 1;
            }
            else{
                s = mid + 1;
            }
        } 
        return ans;
    }
};