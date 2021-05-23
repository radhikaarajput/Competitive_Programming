class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<int> res;
        stack<int>s1;
        stack<int>s2;
        
        //reverse(nums2.begin(), nums2.end());
        
        for(int i: nums2)
        {
            s2.push(i);
        }
        
        
        for(int i=0;i<nums1.size();i++)
        {
            int x=s2.top();
            while(x <nums1[i])
            {
                s1.push(x);
                s2.pop();
                x=s2.top();
                if(x==nums1[i]) break;
                
            }
            if(x > nums1[i])  res.push_back(x);
            else              res.push_back(-1);
            
            
            while(!s1.empty())
            {
                int x= s1.top();
                s2.push(x);
                s1.pop();
            }
        }
        
        return res;
    }
};


/*

You are given two integer arrays nums1 and nums2 both of unique elements, where nums1 is a subset of nums2.

Find all the next greater numbers for nums1's elements in the corresponding places of nums2.

The Next Greater Number of a number x in nums1 is the first greater number to its right in nums2. If it does not exist, return -1 for this number.

 

Example 1:

Input: nums1 = [4,1,2], nums2 = [1,3,4,2]
Output: [-1,3,-1]
Explanation:
For number 4 in the first array, you cannot find the next greater number for it in the second array, so output -1.
For number 1 in the first array, the next greater number for it in the second array is 3.
For number 2 in the first array, there is no next greater number for it in the second array, so output -1.
Example 2:

Input: nums1 = [2,4], nums2 = [1,2,3,4]
Output: [3,-1]
Explanation:
For number 2 in the first array, the next greater number for it in the second array is 3.
For number 4 in the first array, there is no next greater number for it in the second array, so output -1.
*/