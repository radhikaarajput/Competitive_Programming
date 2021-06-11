class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) 
    {
        // Code here
		    int n=text1.length();
            int m=text2.length();
		    int dp[n+1][m+1];
		    
		    
		    for(int i=n;i>=0;i--)
		    {
		        for(int j=m;j>=0;j--)
    		    {
    		        //last row=0 //last col=0
    		        if(i==n || j==m)   dp[i][j]=0;
    		        
        		    else
        		        {
        		            if(text1[i]==text2[j])
        		            {
        		                dp[i][j]=dp[i+1][j+1]+1;   //add 1 diadnoal
        		            }
        		            else
        		            {
        		                dp[i][j]=max(dp[i+1][j], dp[i][j+1]);   
        		            }
        		        }
        		        
        		        
    		    }
		    }
		    
		    return dp[0][0];
    }
};


/*
1143. Longest Common Subsequence
Medium

3163

39

Add to List

Share
Given two strings text1 and text2, return the length of their longest common subsequence. If there is no common subsequence, return 0.

A subsequence of a string is a new string generated from the original string with some characters (can be none) deleted without changing the relative order of the remaining characters.

For example, "ace" is a subsequence of "abcde".
A common subsequence of two strings is a subsequence that is common to both strings.

 

Example 1:

Input: text1 = "abcde", text2 = "ace" 
Output: 3  
Explanation: The longest common subsequence is "ace" and its length is 3.
Example 2:

Input: text1 = "abc", text2 = "abc"
Output: 3
Explanation: The longest common subsequence is "abc" and its length is 3.
Example 3:

Input: text1 = "abc", text2 = "def"
Output: 0
Explanation: There is no such common subsequence, so the result is 0.
 

*/