
class Solution
{
    public:
    //Function to find length of shortest common supersequence of two strings.
    int lcs(char* X, char* Y, int n, int m)
    {
        // Code here
		  
		    int dp[n+1][m+1];
		    
		    
		    for(int i=n;i>=0;i--)
		    {
		        for(int j=m;j>=0;j--)
    		    {
    		        //last row=0 //last col=0
    		        if(i==n || j==m)   dp[i][j]=0;
    		        
        		    else
        		        {
        		            if(X[i]==Y[j])
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
    
    int shortestCommonSupersequence(char* X, char* Y, int m, int n)
    {
        //code here
        return (m+n- lcs(X,Y,m,n));
    }
    
    
};


/*
Shortest Common Supersequence 
Medium Accuracy: 61.09% Submissions: 8452 Points: 4
Given two strings X and Y of lengths m and n respectively, find the length of the smallest string which has both, X and Y as its sub-sequences.
Note: X and Y can have both uppercase and lowercase letters.

Example 1

Input:
X = abcd, Y = xycd
Output: 6
Explanation: Shortest Common Supersequence
would be abxycd which is of length 6 and
has both the strings as its subsequences.
Example 2

Input:
X = efgh, Y = jghi
Output: 6
Explanation: Shortest Common Supersequence
would be ejfghi which is of length 6 and
has both the strings as its subsequences.
Your Task:
Complete shortestCommonSupersequence() function that takes X, Y, m, and n as arguments and returns the length of the required string.

Expected Time Complexity: O(Length(X) * Length(Y)).
Expected Auxiliary Space: O(Length(X) * Length(Y)).

Constraints:
1<= |X|, |Y| <= 100
*/