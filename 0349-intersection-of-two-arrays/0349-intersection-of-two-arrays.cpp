class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s1(nums1.begin(),nums1.end());
        unordered_set<int> s2;
       for(int i=0; i<nums2.size(); i++){

         if(s1.count(nums2[i])){
            s2.insert(nums2[i]);
         }

       }
       vector<int> ans(s2.begin() , s2.end());

       return  ans;
    }
};