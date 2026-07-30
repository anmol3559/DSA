class Solution {
public:
    long long int binarySearch(int n){
        long long int ans = -1;
        int s = 0;
        int e = n;
        long long int mid = s + (e - s)/2;
        while(s<=e){
            if( (mid*mid) == n){
                return mid;
            }
            else if( (mid*mid) < n){
                ans = mid;
                s = mid + 1;
            }
            else{
                e =mid - 1;
            }
            mid = s + (e - s)/2;
        }
        return ans;
    }
    int mySqrt(int x) {
        return binarySearch(x);
    }
};