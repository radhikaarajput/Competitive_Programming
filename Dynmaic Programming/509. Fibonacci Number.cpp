class Solution {
public:
    int fib(int n) 
    {
        vector<int>dp (n+1,-1);
        return cal_fibo(dp,n);
    }
    
    int cal_fibo(vector<int> &dp, int n)
    {
        if(n==0||n==1) return n;
        
        //already calculated value
        if(dp[n] !=-1)  return dp[n];
        
        
        //calculate as not present value;
        return dp[n]=cal_fibo(dp,n-1)+cal_fibo(dp,n-2);
    }
};