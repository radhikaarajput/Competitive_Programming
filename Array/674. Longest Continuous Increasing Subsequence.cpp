class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums)
    {
         int n=nums.size();
    
        //max len 1 atleast;
        int max_len=1;
        int ans=1;
        
        for(int i=1;i<n;i++)
        {
           
                if(nums[i]>nums[i-1])
                {
                    ans++;
                    
                }
                else
                {
                    ans=1;
                }
            
            max_len=max(max_len,ans);
        }
        return max_len;
    }
};



/*

674. Longest Continuous Increasing Subsequence
Easy

1232

146

Add to List

Share
Given an unsorted array of integers nums, return the length of the longest continuous increasing subsequence (i.e. subarray). The subsequence must be strictly increasing.

A continuous increasing subsequence is defined by two indices l and r (l < r) such that it is [nums[l], nums[l + 1], ..., nums[r - 1], nums[r]] and for each l <= i < r, nums[i] < nums[i + 1].

 

Example 1:

Input: nums = [1,3,5,4,7]
Output: 3
Explanation: The longest continuous increasing subsequence is [1,3,5] with length 3.
Even though [1,3,5,7] is an increasing subsequence, it is not continuous as elements 5 and 7 are separated by element
4.
Example 2:

Input: nums = [2,2,2,2,2]
Output: 1
Explanation: The longest continuous increasing subsequence is [2] with length 1. Note that it must be strictly
increasing.

*/