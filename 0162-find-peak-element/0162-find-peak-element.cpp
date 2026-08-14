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
        return binarySearch(nums, st , end);
    }
};