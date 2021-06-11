class Solution {
public:
    int largestRectangleArea(vector<int>& heights) 
    {
        int n= heights.size();
        int right[n];
        stack<int>s;
        
        right[n-1]=n;
        s.push(n-1);
        
        
        for(int i=n-2;i>=0;i--)
        {
            while(!s.empty() && heights[i]<=heights[s.top()])
            {
                s.pop();
            }
            
            if(s.size()==0)
            {
                right[i]=n;
            }
            else
            {
                right[i]= s.top();
            }
            s.push(i);
        }
        
        int left[n];
        left[0]=-1;    
        stack<int>s2;
        s2.push(0);
        
        for(int i=1;i<n;i++)
        {
            while(!s2.empty()&& heights[i]<=heights[s2.top()])
            {
                s2.pop();
            }
            if(s2.size()==0)
            {
                left[i]=-1;
            }
            else
            {
                left[i]=s2.top();
            }
            
            s2.push(i);
        }
        
        int max=0;
        for(int i=0;i<n;i++)
        {
            int width=right[i]-left[i]-1;
            int area=heights[i]*width;
            
            if(max<area)
            {
                max=area;
            }
        }
        
        return max;
    }
};


/*
84. Largest Rectangle in Histogram
Hard

5976

109

Add to List

Share
Given an array of integers heights representing the histogram's bar height where the width of each bar is 1, return the area of the largest rectangle in the histogram.

 

Example 1:


Input: heights = [2,1,5,6,2,3]
Output: 10
Explanation: The above is a histogram where width of each bar is 1.
The largest rectangle is shown in the red area, which has an area = 10 units.
Example 2:


Input: heights = [2,4]
Output: 4
*/