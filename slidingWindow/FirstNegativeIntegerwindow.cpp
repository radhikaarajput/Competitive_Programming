
vector<long long> printFirstNegativeInteger(long long int A[],long long int N, long long int K)
{
                                                 
    vector<long long>ans;
    list<long long> ls;
    
    int i=0,j=0;
    
    while(j<N)
    {
        if(A[j]<0) ls.push_back(A[j]);   //push all -ves
        
        if(j-i+1 < K) j++;   //till window size reach
        else if(j-i+1 == K)
        {
            if(ls.empty()) ans.push_back(0);
            else  ans.push_back(ls.front());
            
            if(A[i]==ls.front()) ls.pop_front();
            i++;
            j++;
        }
    }
    return ans;
    
    
}


/*
Given an array A[] of size N and a positive integer K, find the first negative integer for each and every window(contiguous subarray) of size K.

 

Example 1:

Input : 
N = 5
A[] = {-8, 2, 3, -6, 10}
K = 2
Output : 
-8 0 -6 -6
Explanation :
First negative integer for each window of size k
{-8, 2} = -8
{2, 3} = 0 (does not contain a negative integer)
{3, -6} = -6
{-6, 10} = -6
 
Example 2:
Input : 
N = 8
A[] = {12, -1, -7, 8, -15, 30, 16, 28}
K = 3
Output :
-1 -1 -7 -15 -15 0 

*/