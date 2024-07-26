class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // greedy approach
        int max = 0;
        int start = prices[0];
        for(int i =1;i<prices.size();i++){
            if(start<prices[i]){
                max += prices[i]-start;

            }start = prices[i];
        }
        return max;
    }
};

/*
Within the loop, there's an if statement checking if the current price (prices[i]) is greater than the buying price (start). If true, it indicates a potential profit opportunity.
The difference between the current price and the buying price (prices[i] - start) is calculated and added to max. This step simulates selling the stock bought at start price, capturing the profit, and then considering the current price as a new buying price for potential future transactions.
Regardless of whether a profit was made or not, the start is updated to the current price (prices[i]). This step prepares for the next iteration, considering the current day's price as the new buying price.
Return Statement: After the loop finishes executing, the method returns the accumulated max value, which represents the maximum profit that could have been achieved based on the given stock prices.*/
