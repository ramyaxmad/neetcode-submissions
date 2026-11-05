class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int i = 0;
        int j = 1;
        while(i < prices.size() - 1 && j < prices.size()) {
            if (prices.at(i) > prices.at(j)) {
                i = j;
            }
            else if(prices.at(i) < prices.at(j)) {
                if (maxProfit < (prices.at(j) - prices.at(i)))
                    maxProfit = prices.at(j) - prices.at(i);
            }
            j++;
        }
        return maxProfit;
    }
};
