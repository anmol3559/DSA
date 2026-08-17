class Solution {
    int binaryLeft(vector<int>& nums, int target , int s, int e , int left){
        if(s>e) return left;
        int mid = s + (e - s)/2;
        if(nums[mid] == target){
            left = mid;
            return binaryLeft(nums, target, s, mid - 1, left);
        }
        else if( nums[mid] > target) return binaryLeft(nums, target, s, mid - 1, left);
        else return binaryLeft(nums, target, mid + 1, e , left);
    }
     int binaryRight(vector<int>& nums, int target , int s, int e , int right){
        if(s>e) return right;
       int mid = s + (e - s)/2;
        if(nums[mid] == target){
            right = mid;
            return binaryRight(nums, target, mid + 1, e, right);
        }
        else if( nums[mid] > target) return binaryRight(nums, target, s, mid - 1, right);
        else return binaryRight(nums, target, mid + 1, e , right);
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        if(nums.empty()) return {-1, -1};

        int left = binaryLeft(nums, target, 0, nums.size() - 1,-1);
        int right = binaryRight(nums, target, 0, nums.size() - 1, -1);
                return {left, right};
        
    }
};