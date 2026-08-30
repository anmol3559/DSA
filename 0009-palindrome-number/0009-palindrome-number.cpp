class Solution {
    int func(int x){
        long long ans = 0;
        while(x != 0){
              int temp = x % 10;
              ans = ans*10 + temp;
              x = x / 10;
        }
        return ans;
    }
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;

        if(func(x) != x){
            return false;
        }
        return true;
    }
};