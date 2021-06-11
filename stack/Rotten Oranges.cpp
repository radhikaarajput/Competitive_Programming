class Solution 
{
    public:
    //Function to find minimum time required to rot all oranges. 
    int orangesRotting(vector<vector<int>>& grid) 
    {
        // Code here
        // Code here
	    int n=grid.size();   //no of rows
	    int m=grid[0].size();   //no oc col
	    
	    //ans of same size as grid with all infinity
	    vector<vector<int>> ans(n, vector<int>(m,INT_MAX-1));
	     
	     //queue storing coordinates equal to 2
	     queue<pair<int,int>> q;
	     
	     for(int i=0;i<n;i++)
	     {
	         for(int j=0;j<m;j++)
	         {
	             if(grid[i][j]==2)
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
	             
    	             if(nx>=0 && ny>=0 && nx<n && ny<m && grid[nx][ny]==1)
    	             {
    	                 if(ans[nx][ny] > ans[x][y]+1)
    	                 {
    	                     ans[nx][ny] = ans[x][y]+1;
    	                     q.push({nx,ny}); //helping others 
    	                 }
    	             }
	         }
	         

	         
	     }
	     
	     int t=0;
	         
	         for(int i=0;i<n;i++)
	         {
	             for(int j=0;j<m;j++)
	             {
	                 if(grid[i][j]==1)
	                 {
	                     t= max(t, ans[i][j]);
	                 }
	             }
	         }
	         
	         return t==INT_MAX-1?-1:t;
	    
    }
};


/*
Rotten Oranges 
Medium Accuracy: 50.57% Submissions: 10746 Points: 4
Given a grid of dimension nxm where each cell in the grid can have values 0, 1 or 2 which has the following meaning:
0 : Empty cell
1 : Cells have fresh oranges
2 : Cells have rotten oranges

We have to determine what is the minimum time required to rot all oranges. A rotten orange at index [i,j] can rot other fresh orange at indexes [i-1,j], [i+1,j], [i,j-1], [i,j+1] (up, down, left and right) in unit time. 
 

Example 1:

Input: grid = {{0,1,2},{0,1,2},{2,1,1}}
Output: 1
Explanation: The grid is-
0 1 2
0 1 2
2 1 1
Oranges at positions (0,2), (1,2), (2,0)
will rot oranges at (0,1), (1,1), (2,2) and 
(2,1) in unit time.
Example 2:

Input: grid = {{2,2,0,1}}
Output: -1
Explanation: The grid is-
2 2 0 1
Oranges at (0,0) and (0,1) can't rot orange at
(0,3).
 

Your Task:
You don't need to read or print anything, Your task is to complete the function orangesRotting() which takes grid as input parameter and returns the minimum time to rot all the fresh oranges. If not possible returns -1.
 

Expected Time Compelxity: O(n*m)
Expected Auxiliary Space: O(1)
 

Constraints:
1 ≤ n, m ≤ 500

*/