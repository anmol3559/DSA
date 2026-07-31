class Solution {
public:
    long long int binarySearch(int n){
        long long int ans = -1;
        int start = 0;
        int end = n;
        long long int mid = start + (end - start)/2;
        while(start<=end){
            if( (mid*mid) == n){
                return mid;
            }
            else if( (mid*mid) < n){
                ans = mid;
                start = mid + 1;
            }
            else{
                end =mid - 1;
            }
            mid = start + (end - start)/2;
        }
        return ans;
    }
    int mySqrt(int x) {
        return binarySearch(x);
    }
};