class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& grid) 
    {
        // Code here
	    int n=grid.size();   //no of rows
	    int m=grid[0].size();   //no oc col
	    
	    //ans of same size as grid with all infinity
	    vector<vector<int>> ans(n, vector<int>(m,INT_MAX-1));
	     
	     //queue storing coordinates equal to 0
	     queue<pair<int,int>> q;
	     
	     for(int i=0;i<n;i++)
	     {
	         for(int j=0;j<m;j++)
	         {
	             if(grid[i][j]==0)
	             {
	                 ans[i][j]=0;
	                 q.push({i,j});
	             }
	         }
	     }
	     
	     while(q.size()!=0)
	     {
	         int x= q.front().first;
	         int y=q.front().second;
	         q.pop();
	         
	         int dx[4]={-1,1,0,0};
	         int dy[4]={0,0,1,-1};
	         
	         for(int j=0;j<4;j++)
	         {
	             int nx= x+dx[j];
	             int ny= y+dy[j];
	             
	             if(nx>=0 && ny>=0 && nx<n && ny<m)
	             {
	                 if(ans[nx][ny] > ans[x][y]+1)
	                 {
	                     ans[nx][ny] = ans[x][y]+1;
	                     q.push({nx,ny}); //helping others 
	                 }
	             }
	         }
	         
	         
	     }
	    
	    return ans;   
    }
};


/*
542. 01 Matrix
Medium

2416

130

Add to List

Share
Given an m x n binary matrix mat, return the distance of the nearest 0 for each cell.

The distance between two adjacent cells is 1.

 

Example 1:


Input: mat = [[0,0,0],[0,1,0],[0,0,0]]
Output: [[0,0,0],[0,1,0],[0,0,0]]
Example 2:


Input: mat = [[0,0,0],[0,1,0],[1,1,1]]
Output: [[0,0,0],[0,1,0],[1,2,1]]
 

Constraints:

m == mat.length
n == mat[i].length
1 <= m, n <= 104
1 <= m * n <= 104
mat[i][j] is either 0 or 1.
There is at least one 0 in mat.
Accepted
129,145
Submissions
311,772

*/