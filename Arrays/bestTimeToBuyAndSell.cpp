/*
LeetCode 121 - Best Time to Buy and Sell Stock

Difficulty: Easy

Approach:
Traverse the array once while keeping track of the minimum stock price seen so far.
At each day, calculate the profit by selling on that day and update the maximum profit.

Time Complexity: O(n)
Space Complexity: O(1)
*/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice=prices[0];
        int profit=0;
        for(int i=1;i<prices.size();i++){
            if(prices[i]<minPrice){
                minPrice=prices[i];
            }
            if(prices[i]-minPrice>profit){
                profit=prices[i]-minPrice;
            }
        }
      return profit;  
    }
};