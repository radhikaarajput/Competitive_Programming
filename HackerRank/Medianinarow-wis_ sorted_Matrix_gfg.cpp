/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<cmath>
#include <stack>
using namespace std;

/*
Approach use a recusive fn 
    pop all elememts in stack and store them in a variable
    call recusive f till all elemenst pop cout
    push all ements in stack again (x) except the middle eleemnts i.e. (n+1)/2
*/
void del_mid(stack<int>s,int n,int cur);
int main()
{
    stack<int>s;
    int n,x,i,cur=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        s.push(x);
    }
    
   
    del_mid(s,n,cur);
    
    
    return 0;
}

void del_mid(stack<int>s,int n, int cur=0)
{
    stack<int>s2;

    
     while(!s.empty())
    {
         int z=s.top();
         s.pop();
         if(cur != floor(n/2)+1)
        {
            s2.push(z);
            cur++;
        }
    } 
    
    
     while(!s2.empty())
    {
        cout<<s2.top()<<" ";
        s2.pop();
    } 
}