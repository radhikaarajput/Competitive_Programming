/*Majority Element
Given an array A of N elements. Find the majority element in the array. A majority element in an array A of size N is an element that appears more than N/2 times in the array.

Input:  
The first line of the input contains T denoting the number of testcases. The first line of the test case will be the size of array and second line will be the elements of the array.

Output: 
For each test case the output will be the majority element of the array. Output "-1" if no majority element is there in the array.

Constraints:
1 <= T<= 100
1 <= N <= 107
0 <= Ai <= 106

Example:
Input:
2
5
3 1 3 3 2
3
1 2 3

Output:
3
-1

Explanation:
Testcase 1: Since, 3 is present more than N/2 times, so it is the majority element.
 

** For More Input/Output Examples Use 'Expected Output' option **
*/

//code
#include <iostream>
#include<stdlib.h>
#include <cmath>
using namespace std;

int main() 
{
    //code
    int T,run,i,j,check;
    int count=0;
    cin>>T;
    int N,index,max_count,flag=0;
    int A_res[T];
    for (run = 0;run <T; run++ )
    { 
        cin>>N;     //size array
        int A[N];
        for (i = 1; i <=N; i++)
        {
            cin>>A[i];
        }
       
       
       for(i=1;i<=N;i++)
       {
           count=0;
           flag=0;
       
              for(j=1;j<=N;j++)
              {
                  if(A[i]==A[j])
                    count++;
              }
              
              
             if(N%2 != 0)  //size odd array
                check=N+1;
            else
                check=N;
              
              if(check/2 <= count)
              {     
                  flag=1;
                  A_res[run]=A[i];
                  break;
              }
              
                    
       }
       
       if(flag==0)
        A_res[run]=-1;
        
      
    }
    
    for(run = 0; run < T; run++)
    {
        cout<<A_res[run];
    }
    return 0;
}
