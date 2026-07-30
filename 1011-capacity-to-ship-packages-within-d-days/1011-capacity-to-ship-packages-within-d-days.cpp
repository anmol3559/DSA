class Solution {
    bool isPossible(vector<int>& weights, int days, int mid){
        int daysCount = 1;
        int weightsSum = 0;
        for(int i=0; i<weights.size(); i++){
            if( weightsSum + weights[i] <= mid){
                weightsSum += weights[i];
            }
            else{
                daysCount ++;
                if( daysCount > days || weights[i] > mid){
                    return false;
                }
                weightsSum = weights[i];
            }
        }
        return true;
    }
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int s = 0;
        int sum = 0;
        for(int i=0; i<weights.size(); i++){
            sum += weights[i];
        }
        int e = sum;
        int ans = -1;
        int mid = s + (e - s)/2;

        while(s <= e){
            if( isPossible(weights, days, mid)){
                ans = mid;
                e = mid -1;
            }
            else{
                s = mid + 1;
            }
            mid = s + (e - s)/2;
        }
        return ans;
    }
};