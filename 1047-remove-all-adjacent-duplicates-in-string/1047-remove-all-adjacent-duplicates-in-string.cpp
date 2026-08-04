class Solution {
public:
    string removeDuplicates(string s) {
      // "Agar mera dabba (ans) khali hai YA dabbe ka aakhri character mere naye character se match nahi karta, toh andar daal do (push). Warna nikal do (pop)."
      
        string ans = {};
         for(int i=0; i<s.length(); i++){
           if(!ans.empty() && s[i] == ans.back() ){
            ans.pop_back();
           }
           else{
            ans.push_back(s[i]);
           }
         }
         
        return ans;
    }
};