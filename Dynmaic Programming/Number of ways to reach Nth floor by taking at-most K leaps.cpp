// C++ program to reach N-th stair
// by taking a maximum of K leap
#include <bits/stdc++.h>

using namespace std;

int solve(int n, int k)
{

	std::vector<int>dp(n+1,0);
	dp[0]=1;
	dp[1]=1;
	for(int i=2;i<k;i++)
	{
	    dp[i]=2*dp[i-1];
	}
	for(int i=k;i<=n;i++)
	{
	    dp[i]=2*dp[i-1]-dp[i-k-1];
	}
	
	return dp[n];
}

// Driver Code
int main()
{
	// N i the no of total stairs
	// K is the value of the greatest leap
	int N = 29;
	int K = 5;

	cout << solve(N, K);

	solve(N, K);
	return 0;
}


/*

Number of ways to reach Nth floor by taking at-most K leaps
Difficulty Level : Easy
Last Updated : 31 May, 2021
Given N number of stairs. Also given the number of steps that one can cover at most in one leap (K). The task is to find the number of possible ways one (only consider combinations) can climb to the top of the building in K leaps or less from the ground floor.
Examples: 
 

Input: N = 5, K = 3 
Output: 5 
To reach stair no-5 we can choose following combination of leaps: 
1 1 1 1 1 
1 1 1 2 
1 2 2 
1 1 3 
2 3 
Therefore the answer is 5.
Input: N = 29, K = 5 
Output: 603 

*/