/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int n=s.length();
    cout<<"1.length "<<s.length();
     
    cout<<"\nString from backward ";
    reverse(s.begin(), s.end());
    cout<<s;
    cout<<"\nString from backward using loop ";
    for(int i=0;i<n/2;i++)
    {
        swap(s[i], s[n-i-1]);
    }
    cout<<s;
    
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]==' ')
            count++;
    }
    cout<<"/n Words in string"<<count;
    return 0;
}
