class Solution {
public:
    int jump(vector<int>& nums) 
    {
        int n=nums.size();
        vector<int>dp(n,0);
        return min_jumps(nums,n,dp,0);
        
    }
    
    int min_jumps(vector<int>& nums,int n,vector<int>& dp,int i)   //i starting index for a jump
    {
        if(i==n-1) return 0;
        if(i>=n) return INT_MAX;
        
        if(dp[i]!=0) return dp[i];
        
        int steps=INT_MAX;
        int max_jumps=nums[i];
        
        for(int jump=1;jump<=max_jumps;jump++)
        {
            int next_cell=jump+i;
            int subproblem= min_jumps(nums,n,dp,next_cell);
            
            if(subproblem!=INT_MAX)  
            {
                steps=min(steps, subproblem+1);
            }
        }
        
        return dp[i]=steps;
    }
};