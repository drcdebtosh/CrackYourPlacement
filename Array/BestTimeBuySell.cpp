class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit =0;
        int buy = INT_MAX;
        int sell = INT_MAX;
        for(int i=0;i<prices.size()-1;i++){
            if(buy>prices[i])
                buy= prices[i];
            else continue;    
            for(int j=i+1;j<prices.size();j++){
                sell = prices[j];
                int profit = sell - buy;
                if(maxprofit<profit)
                    maxprofit=profit;
            }
        }
        return maxprofit;
        
    }
};