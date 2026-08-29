class Solution {
    int getScore(const vector<int>& arr){
        if(arr.size() <= 1) return 0;

        vector<int> pref(arr.size()), suff(arr.size());
        pref[0] = arr[0];

        for(int i=1; i<arr.size(); i++){
            pref[i] = gcd(pref[i-1], arr[i]);
        }

        suff[arr.size()-1] = arr[arr.size() -1];

        for(int i=arr.size()-2; i>=0; i--){
            suff[i] = gcd(suff[i+1], arr[i]);
        }

        int score = 0;
        for(int i=0; i<arr.size()-1; i++){
            if(pref[i] == suff[i+1]){
                score++;
            }
        }
        return score;
    }
public:
    int maxValidSplits(vector<int>& nums) {
    if(nums.size() <= 1) return 0;

    vector<int> target;
    vector<int> pref(nums.size());
    pref[0] = nums[0];
        target.push_back(0);
        for(int i=1; i<nums.size(); i++){
            pref[i] = gcd(pref[i-1], nums[i]);
            if(pref[i] != pref[i-1]){
                target.push_back(i);
            }
        }
        vector<int> suff(nums.size());
        suff[nums.size()-1] = nums[nums.size()-1];
        target.push_back(nums.size()-1);
        for(int i=nums.size() -2; i>=0; i--){
            suff[i] = gcd(suff[i+1], nums[i]);
            if(suff[i] != suff[i+1]){
                target.push_back(i);
            }
        }
        sort(target.begin(), target.end());
        target.erase(unique(target.begin(), target.end()), target.end());

        int max_score = getScore(nums);

        for(int i=0; i<target.size(); i++){
            int k = target[i];
            vector<int> arr;
            arr.reserve(nums.size() - 1);

            for(int j=0; j<nums.size(); j++){
                if(j != k){
                arr.push_back(nums[j]);
                }
            }
            max_score = max(max_score, getScore(arr));
        }
        return max_score;
    }
};