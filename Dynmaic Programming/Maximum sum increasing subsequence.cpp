int maxSumIS(int nums[], int n)  
	{  
        vector<int>dp(n,1);
        
        //dp will store max sum till its index
        //as, max sum till index 0 = arr[0]
        dp[0]=nums[0];
        
        int max_len=INT_MIN;
        
        //maxsum stores max sum
        int maxsum=dp[0];
    
        //starting from i , bc alredy know value of dp[0]
        for(int i=1;i<n;i++)
        {
            dp[i]=nums[i];   
            for(int j=0;j<i;j++)
            {
                if(nums[i]>nums[j])   //checking for inc sunsequence
                {
                    dp[i]=max(dp[i], dp[j]+nums[i]);
                    maxsum=max(maxsum,dp[i]);
            
                }
            }
        }
        
        return maxsum;
	}


    /*
    
    Maximum sum increasing subsequence 
Medium Accuracy: 49.92% Submissions: 14190 Points: 4
Given an array arr of N positive integers, the task is to find the maximum sum increasing subsequence of the given array.
 

Example 1:

Input: N = 5, arr[] = {1, 101, 2, 3, 100} 
Output: 106
Explanation:The maximum sum of a
increasing sequence is obtained from
{1, 2, 3, 100}
Example 2:

Input: N = 3, arr[] = {1, 2, 3}
Output: 6
Explanation:The maximum sum of a
increasing sequence is obtained from
{1, 2, 3}

    
    */