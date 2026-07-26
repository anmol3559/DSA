class Solution {
public:
    int reverse(int x) {
        long number = 0;
         while(x!=0){
        int a = x % 10;
       if((number < (INT_MIN/10)) || (number > (INT_MAX/10))){
       return 0;
       }
        number = number*10 + a;
        x = x / 10;
        }
        return number;
       
    }
};