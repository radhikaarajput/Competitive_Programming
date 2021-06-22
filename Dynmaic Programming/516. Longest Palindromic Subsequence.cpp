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
    
    int longestPalindromeSubseq(string s) 
    {
        string s2;
        string s1;
        s1=s;
        reverse(s.begin(), s.end());
        s2=s;
        return longestCommonSubsequence(s1,s2);
    }
};


/*

516. Longest Palindromic Subsequence
Medium

3312

220

Add to List

Share
Given a string s, find the longest palindromic subsequence's length in s.

A subsequence is a sequence that can be derived from another sequence by deleting some or no elements without changing the order of the remaining elements.

 

Example 1:

Input: s = "bbbab"
Output: 4
Explanation: One possible longest palindromic subsequence is "bbbb".
Example 2:

Input: s = "cbbd"
Output: 2
Explanation: One possible longest palindromic subsequence is "bb".
 

Constraints:

1 <= s.length <= 1000
s consists only of lowercase English letters.

*/