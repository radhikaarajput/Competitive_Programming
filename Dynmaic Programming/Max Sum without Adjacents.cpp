class Solution{
public:	
	// calculate the maximum sum with out adjacent
	int findMaxSum(int *A, int n) 
	{
	    // code here
	    if(n==1) return max(0, A[0]);
	    if(n==2) return max(A[1], A[0]);
	    
	    vector<int>dp(n,0);
	    
	    dp[0]=max(0, A[0]);
	    dp[1]=max(A[1], A[0]);
	    for(int i=2;i<n;i++)
	    {
	        int inc= A[i]+dp[i-2];
	        int exc=dp[i-1];
	        dp[i]=max(inc,exc);
	    }
	    
	    return dp[n-1];
	}
};


/*

Max Sum without Adjacents 
Easy Accuracy: 56.94% Submissions: 4043 Points: 2
Given an array Arr of size N containing positive integers. Find the maximum sum of a subsequence such that no two numbers in the sequence should be adjacent in the array.

Example 1:

Input:
N = 6
Arr[] = {5, 5, 10, 100, 10, 5}
Output: 110
Explanation: If you take indices 0, 3
and 5, then Arr[0]+Arr[3]+Arr[5] =
5+100+5 = 110.
Example 2:

Input:
N = 4
Arr[] = {3, 2, 7, 10}
Output: 13
Explanation: 3 and 10 forms a non
continuous  subsequence with maximum
sum.
Your Task:
You don't need to read input or print anything. Your task is to complete the function findMaxSum() which takes the array of integers arr and n as parameters and returns an integer denoting the answer.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)

Constraints:
1 ≤ N ≤ 106
1 ≤ Arri ≤ 107

*/