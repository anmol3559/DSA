class Solution {
public:
    vector<string> largestString(vector<int>& nums) {
        vector<string> ans;
        for(int i=0; i<nums.size(); i++){
            int curr = nums[i];
            vector<int> cnt(26, 0);

            for(int j=0; j<25; j++){
                cnt[j] = curr % 2;
                curr /= 2;
            }

            cnt[25] = curr;

            string s = "";
            for( int j =25; j>=0; j--){
                if(cnt[j] > 0){
                    s.append(cnt[j], 'a' +  j);
                }
            }
            ans.push_back(s);
        }
        return ans;
    }
};