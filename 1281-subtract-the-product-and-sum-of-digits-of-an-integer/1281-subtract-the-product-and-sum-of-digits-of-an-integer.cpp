class Solution {
public:
    int subtractProductAndSum(int n) {
    int product = 1;
    int sum = 0;
    while(n>0){
        int a = n % 10;
        n = n/10;
   product = product * a;
   sum = sum + a;
    }   
  int sub = product - sum;    
    return sub;
}
};