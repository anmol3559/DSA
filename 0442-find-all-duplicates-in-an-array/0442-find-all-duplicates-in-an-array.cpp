class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        vector<int> freq(nums.size() +1, 0);
        
        // Step 2: Loop chala kar count karo aur duplicate store karo
        for( int i=0; i < nums.size(); i++ ){
          int x = nums[i];
          freq[x]++;
          if(freq[x]==2){
            ans.push_back(x);
          }
        }
        
        return ans;
    }
};