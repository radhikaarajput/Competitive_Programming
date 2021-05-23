class Solution
{
    public:
    //Function to find all elements in array that appear more than n/k times.
    int countOccurence(int arr[], int n, int k) 
    {
        // Your code here
        map<int,int> count;
        for(int i=0;i<n;i++)
        {
            count[arr[i]]++;
        }
        int ans=0;
        
        //map<int,int> iterator::it;
        for(auto i:count)
        {
            if(i.second > n/k)
            {
                ans++;
            }
        }
        
        return ans;
    }
};

/*
Count More than n/k Occurences 
Medium Accuracy: 49.91% Submissions: 15200 Points: 4
Given an array arr[] of size N and an element k. The task is to find all elements in array that appear more than n/k times.

Example 1:

Input:
N = 8
arr[] = {3,1,2,2,1,2,3,3}
k = 4
Output: 2
Explanation: In the given array, 3 and
 2 are the only elements that appears 
more than n/k times.
Example 2:

Input:
N = 4
arr[] = {2,3,3,2}
k = 3
Output: 2
Explanation: In the given array, 3 and 2 
are the only elements that appears more 
than n/k times. So the count of elements 
are 2.
*/