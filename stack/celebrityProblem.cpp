class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here 
        int i,j;
        int count[n];
        stack<int>s;
        for(i=0;i<n;i++)
        {
            s.push(i);
        }
        
        while(s.size() >=2)
        {
            i=s.top();
            s.pop();
            j=s.top();
            s.pop();
            //if i knows j, then obviously i is not celbrity
            if(M[i][j]==1)  s.push(j);
            else s.push(i);   //i does not know j, them j is not celbeity
        }
        
        
        int ans=s.top();
        s.pop();
        
         for(i=0;i<n;i++)
        {
            if(i!=ans)
            {
                if(M[i][ans]==0 || M[ans][i]==1)
                {
                    return -1;
                }
            }
        }
        
        return ans;
    }
};

/*
The Celebrity Problem 
Medium Accuracy: 39.46% Submissions: 63917 Points: 4
A celebrity is a person who is known to all but does not know anyone at a party. If you go to a party of N people, find if there is a celebrity in the party or not.
A square NxN matrix M[][] is used to represent people at the party such that if an element of row i and column j  is set to 1 it means ith person knows jth person. Here M[i][i] will always be 0.
Note: Follow 0 based indexing.
 

Example 1:

Input:
N = 3
M[][] = {{0 1 0},
         {0 0 0}, 
         {0 1 0}}
Output: 1
Explanation: 0th and 2nd person both
know 1. Therefore, 1 is the celebrity. 

Example 2:

Input:
N = 2
M[][] = {{0 1},
         {1 0}}
Output: -1
Explanation: The two people at the party both
know each other. None of them is a celebrity.

Your Task:
You don't need to read input or print anything. Complete the function celebrity() which takes the matrix M and its size N as input parameters and returns the index of the celebrity. If no such celebrity is present, return -1.


Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)


Constraints:
2 <= N <= 3000
0 <= M[][] <= 1
*/