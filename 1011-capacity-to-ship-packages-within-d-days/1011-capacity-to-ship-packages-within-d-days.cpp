class Solution {
    bool isPossible(const vector<int>& weights, int days, int mid, int index, int currentSum, int daysCount){
        if( index == weights.size()) return true;
         if(weights[index] > mid) return false;

         if(currentSum + weights[index] <= mid){
            return isPossible(weights, days, mid, index + 1, currentSum + weights[index], daysCount);
         }
         else{
            if(daysCount + 1 > days){
                return false;
            }
            return isPossible(weights, days, mid, index + 1, weights[index], daysCount + 1);
         }
    }
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int s = 0;
        int sum = 0;
        for(int i=0; i<weights.size(); i++){
            sum += weights[i];
            s = max(s , weights[i]);
        }

        int e = sum;
        int ans = -1;
        int mid = s + (e - s)/2;
        while(s <= e){

            if(isPossible(weights , days ,mid , 0, 0, 1)){
                ans = mid;
                e = mid - 1;
            }
            else{
                s = mid + 1;
            }
            mid = s + (e - s)/2;
        }
        return ans;
    }
};