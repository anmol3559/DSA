class Solution {
public:
    int totalNumbers(vector<int>& digits) {

        vector<int> count(10, 0);
        for (int d : digits) {
            count[d]++;
        }

        int ans = 0;
        for (int i = 100; i <= 998; i += 2) {
            int curr = i;
            int ones = curr % 10;
            curr /= 10;
            int tens = curr % 10;
            curr /= 10;
            int hundreds = curr;

            count[hundreds]--;
            count[tens]--;
            count[ones]--;

            if (count[hundreds] >= 0 && count[tens] >= 0 && count[ones] >= 0) {
                ans++;
            }

            count[hundreds]++;
            count[tens]++;
            count[ones]++;
        }
         return ans;
    }
};