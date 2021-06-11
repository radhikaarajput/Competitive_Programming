class Solution {
public:
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