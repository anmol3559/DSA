class Solution {
    bool canEat(vector<int>& piles, int h, int k){
        long long totalHours = 0;
        for(int i = 0; i < piles.size(); i++){
            totalHours += (piles[i] + k - 1) / k;
        }
        return totalHours <= h;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int s = 1;
        int e = *max_element(piles.begin(), piles.end());
        int ans = -1;
        while(s <= e){
            int mid = s + (e - s)/2;
            if(canEat(piles, h, mid)){
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