class Solution {
public:
    int climbStairs(int n) 
    {
        //bottom down dp with memoization, sc=n, tc=n
        vector<int>dp(n+1,0);
        dp[0]=1;
        dp[1]=1;
        
        for(int i=2;i<=n;i++)
        {
            dp[i]=dp[i-1]+dp[i-2];
        }
        
        return dp[n];
        //can use 3 var also and then, return their sum at last;
    }
    
};