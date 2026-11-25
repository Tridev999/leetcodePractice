class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max1 = 0;
        int min1 = INT_MAX;
        for(int price:prices){
            if(min1>price){
                min1 = price;
            }
            else if(max1<price-min1){
                max1 = price-min1;
            }
        }
        return max1;
    }
};