/*
Sample Input

5 4
1 2 3 4 5
Sample Output

5 1 2 3 4
Explanation

When we perform  left rotations, the array undergoes the following sequence of changes:

Thus, we print the array's final state as a single line of space-separated values, which is 5 1 2 3 4.
*/


#include<iostream>
using namespace std;
int main()
{
    int n,d,i,temp,d2;
    cin>>n;
    cin>>d;

    int A[n];   
    for(i=0;i<n;i++)
    {
        cin>>A[i];
    } 

    
    
        for(i=0;i<n;i++)
        {

            cout<<A[(d+i)%n]<<' ';
        }

        

    return 0;
}
