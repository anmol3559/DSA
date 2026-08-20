class Solution {
public:
    long long func(vector<int>& piles, int mid) {
        long long total_hrs = 0;
        for (int i = 0; i < piles.size(); i++) {
            total_hrs += (piles[i] + mid - 1) / mid;
        }
        return total_hrs;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());
        int ans = high;
        while (low <= high) {
            int mid = low + ((high - low) / 2);
            long long total_hrs = func(piles, mid);
            if (total_hrs <= h) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};