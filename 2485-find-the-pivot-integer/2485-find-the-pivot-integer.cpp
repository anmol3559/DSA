class Solution {
public:
    int pivotInteger(int n) {
        int totalsum = (n * (n + 1)) / 2;
        int pivot = sqrt(totalsum);

        if(pivot * pivot == totalsum){
            return pivot;
        }
        return -1;
    }
};