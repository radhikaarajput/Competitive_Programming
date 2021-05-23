class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) 
	{
	    // code here
	    //approach: return col that has first 1, as sorted
	    for(int c=0; c<m;c++)
	    {
	        for(int r=0; r<n;r++)
    	    {
    	        if(arr[r][c]==1) 
    	            return r;
    	    }
	    }
	    return -1;
	}

};
