class Solution {
public:
    int coinChange(vector<int>& coins, int amount) 
    {
        vector<int>dp(amount+1, 0);
        dp[0]=0; //no coins available as amount=0;
        
        for(int i=1;i<=amount;i++)
        {
            //initialize dp[i]=max, so that case like [2,3,4]  covers when amount=23; as after index 3 dp[i]=wrong answers,,
            
            dp[i]=INT_MAX;  //so initialize dp with max value we have
            
            for(int c: coins)       //iteratin over all coins 
            {
                if((i-c)>=0  && (dp[i-c]!=INT_MAX))     //to cover cases to not to nergatve value of if i=1 and c=3
                {                                           //dp[i-c]!=INT_MAX) no solution exist
                    dp[i]=min(dp[i],dp[i-c]+1);
                }

            }

            /*for (int &coin : coins) {
                if (coin <= i) {
                    dp[i] = min(dp[i], 1 + dp[i - coin]);
                }*/
        }
        
        
        return dp[amount]==INT_MAX?-1:dp[amount];
        
    }
};


/*
322. Coin Change
Medium

7153

199

Add to List

Share
You are given an integer array coins representing coins of different denominations and an integer amount representing a total amount of money.

Return the fewest number of coins that you need to make up that amount. If that amount of money cannot be made up by any combination of the coins, return -1.

You may assume that you have an infinite number of each kind of coin.

 

Example 1:

Input: coins = [1,2,5], amount = 11
Output: 3
Explanation: 11 = 5 + 5 + 1
Example 2:

Input: coins = [2], amount = 3
Output: -1
Example 3:

Input: coins = [1], amount = 0
Output: 0
Example 4:

Input: coins = [1], amount = 1
Output: 1
Example 5:

Input: coins = [1], amount = 2
Output: 2

*/