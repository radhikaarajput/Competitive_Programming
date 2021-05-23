class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
    {
        int l1= nums1.size();
        int l2=nums2.size();
        
        int length=l1+l2;
        int a1=0,a2=0,k=0;
       double finalArray[length];
        while(a1<l1 && a2<l2)
        {
            if(nums1[a1]<nums2[a2])
            {
                finalArray[k++]=nums1[a1];
                a1++;
            }
            else
            {
               finalArray[k++]=nums2[a2]; 
                a2++;
            }
            
        }
        
        while(a1<l1 )
        {
            finalArray[k]=nums1[a1];
            k++;
            a1++;
        }
        
        while(a2<l2 )
        {
            finalArray[k]=nums2[a2];
            k++;
            a2++;
        }
        
        double r=0;
        
        if(length%2 ==0)
        {
           double x= finalArray[length/2];
            double y= finalArray[(length/2)-1];
            return (x+y)/2;
            
        }
        
        else{
            return finalArray[length/2];
        }
        
      
        
    }
};

/*
Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

The overall run time complexity should be O(log (m+n)).

 

Example 1:

Input: nums1 = [1,3], nums2 = [2]
Output: 2.00000
Explanation: merged array = [1,2,3] and median is 2.
Example 2:

Input: nums1 = [1,2], nums2 = [3,4]
Output: 2.50000
Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.
Example 3:

Input: nums1 = [0,0], nums2 = [0,0]
Output: 0.00000
*/