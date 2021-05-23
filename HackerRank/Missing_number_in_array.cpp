/*Missing number in array
Given an array C of size N-1 and given that there are numbers from 1 to N with one element missing, the missing number is to be found.

Input:
The first line of input contains an integer T denoting the number of test cases. For each test case first line contains N(size of array). The subsequent line contains N-1 array elements.

Output:
Print the missing number in array.

Constraints:
1 = T = 200
1 = N = 107
1 = C[i] = 107

Example:
Input:
2
5
1 2 3 5
10
1 2 3 4 5 6 7 8 10

Output:
4
9*/


#include <iostream>
using namespace std;

int main() 
{
    //code
    int T,run,i;
    cin>>T;
    int N,res,C,total,mytotal;
    int A[T];
    for (run = 0;run <T; run++ )
    { 
        cin>>N;     //size array
         mytotal=0;
        total=0;
        for (i = 1; i <N; i++)
        {
            cin>>C;
            mytotal=mytotal+C;
        }
        total = ((N*(N+1))/2)- mytotal; // subtracting the overall sum of array elements from N integers 
        A[run]=total; //saving it to array
       
    }
    for(run = 0; run < T; run++)
    {
        cout<<A[run];
    }
    return 0;
}

