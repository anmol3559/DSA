class Solution {
    int binarySearch(vector<int>& nums, int st, int end){
        int mid = st + (end - st)/2;
        if(st >= end) return st;
        if(nums[mid] < nums[mid+1]) return binarySearch(nums , mid + 1, end);
        else return binarySearch(nums, st , mid);
    }
public:
    int findPeakElement(vector<int>& nums) {
        
        int st = 0 ;
        int end = nums.size() - 1;
        
        // while(st<end){

            // int mid = st + (end - st)/2;
            // if(nums[mid] < nums[mid + 1]) st = mid + 1;
            // else end = mid;
        int ans = binarySearch(nums, st , end);
        // }
        return ans ;
    }
};