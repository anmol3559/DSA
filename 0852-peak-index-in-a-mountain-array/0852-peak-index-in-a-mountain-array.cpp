class Solution {
    int binarysearch(vector<int>& arr , int start , int end){
        if(start>end)  return start;
        int mid = start + (end - start)/2;
        if(arr[mid] < arr[mid + 1])  return binarysearch(arr , mid+1 , end);
        else  return binarysearch(arr, start , mid - 1);
    }
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start = 0;
        int end = arr.size() - 1;
        int ans = binarysearch(arr, start , end);
        return ans;
    }
};