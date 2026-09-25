class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int total=numBottles;
        while(numBottles>=numExchange){
            int val= numBottles/numExchange;
            total += val;
            numBottles -= (val*numExchange-val);
        }
        return total;
    }
};