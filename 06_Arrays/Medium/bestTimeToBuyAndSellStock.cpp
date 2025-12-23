#include <iostream>
#include <vector>
using namespace std;

/*
 Function: maxProfit
 Purpose : Finds the maximum profit from a single buy and a single sell
 Approach: One-pass greedy solution

 Key Idea:
 - Track the minimum stock price seen so far (best buy)
 - For each day, calculate profit if we sell on that day
 - Update the maximum profit accordingly

 Constraints:
 - You must buy before you sell
 - Only one transaction is allowed

 Time Complexity : O(n)
 Space Complexity: O(1)
*/
int maxProfit(vector<int> &prices){

    // Edge case: no prices available
    if(prices.empty()) return 0;

    // Stores the maximum profit achievable
    int max_profit = 0;

    // Best price to buy so far (minimum price)
    int best_buy = prices[0];

    // Start from day 1 since day 0 is initial buy
    for(int i = 1; i < prices.size(); i++){

        // Calculate profit if we sell today
        int profit_today = prices[i] - best_buy;

        // Update maximum profit
        max_profit = max(max_profit, profit_today);

        // Update best buying price
        best_buy = min(best_buy, prices[i]);
    }

    return max_profit;
}

int main(){
    vector<int> prices = {7, 1, 5, 3, 6, 4};

    cout << "Max Profit is: " << maxProfit(prices);
    return 0;
}
