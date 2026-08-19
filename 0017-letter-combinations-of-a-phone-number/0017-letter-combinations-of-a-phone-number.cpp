class Solution {
    void solve(string digits, string output, int index, vector<string>& ans, string mapping[]){
        if(index >= digits.length()){
            if(output.length() > 0){
                ans.push_back(output);
            }
            return;
        }
        int num = digits[index] - '0';
        string val = mapping[num];
        for(int i=0; i<val.length(); i++){
            output.push_back(val[i]);
            solve(digits, output, index + 1, ans, mapping);
            output.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        string output = "";
        string mapping[10] = { "", "" ,"abc" ,"def" ,"ghi" ,"jkl" ,"mno" ,"pqrs" ,"tuv" ,"wxyz" };
        solve(digits, output, 0, ans, mapping);
        return ans;
    }
};