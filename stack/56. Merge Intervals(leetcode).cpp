class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) 
    {
        //first of all sort
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> ans;
        ans.push_back(intervals[0]);  //[1,3] in ans now (first)
        int j = 0;
        int i = 1;
        int max;
        
        for(i=1;i< intervals.size();i++)
        {
            //end of first >= start of second 
            //intervals[0][1] >= intervals[1][0]
            //update our first element ans till overlapping intervals coming
            if(ans[j][1] >= intervals[i][0])
            {
                //find max between end of both
                if(ans[j][1] >= intervals[i][1])  max=ans[j][1];
                else max= intervals[i][1];
                
                ans[j][1]=max;   //end of ans updated if overlapping interval
            }
            else
            {
                //no overlapping
                ans.push_back(intervals[i]);
                j++;    //j is size of our interval
            } 
        }
        return ans;
    }
};


/*
56. Merge Intervals
Medium

7494

388

Add to List

Share
Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals, and return an array of the non-overlapping intervals that cover all the intervals in the input.

 

Example 1:

Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
Output: [[1,6],[8,10],[15,18]]
Explanation: Since intervals [1,3] and [2,6] overlaps, merge them into [1,6].
Example 2:

Input: intervals = [[1,4],[4,5]]
Output: [[1,5]]
Explanation: Intervals [1,4] and [4,5] are considered overlapping.
 

Constraints:

1 <= intervals.length <= 104
intervals[i].length == 2
0 <= starti <= endi <= 104
*/