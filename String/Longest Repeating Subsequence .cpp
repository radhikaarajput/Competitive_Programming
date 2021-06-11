lass Solution {
	public:
		int LongestRepeatingSubsequence(string str)
		{
		    // Code here
		    int n=str.length();
		    int dp[n+1][n+1];
		    
		    
		    for(int i=n;i>=0;i--)
		    {
		        for(int j=n;j>=0;j--)
    		    {
    		        //last row=0 //last col=0
    		        if(i==n || j==n)   dp[i][j]=0;
    		        
        		    else
        		        {
        		            if(str[i]==str[j]  && i!=j)
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

Longest Repeating Subsequence 
Easy Accuracy: 50.4% Submissions: 11601 Points: 2
Given a string str, find length of the longest repeating subseequence such that the two subsequence don’t have same string character at same position, i.e., any i’th character in the two subsequences shouldn’t have the same index in the original string.
 

Exampel 1:

Input: str = "axxxy"
Output: 2
Explanation: The longest repeating subsequenece
is "xx".
Example 2:

Input: str = "aab"
output: 1
Explanation: The longest reapting subsequenece
is "a".
 

Your Task:
You don't need to read or print anything. Your task is to complete the function LongestRepeatingSubsequence() which takes str as input parameter and returns the length of the longest repeating subsequnece.
 

Expected Time Complexity: O(n2)
Expected Space Complexity: O(n2)
*/