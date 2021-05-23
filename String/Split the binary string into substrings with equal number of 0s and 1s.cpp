/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
/*
Split the binary string into substrings with equal number of 0s and 1s
Difficulty Level : Easy
Last Updated : 20 Nov, 2019
Given a binary string str of length N, the task is to find the maximum count of substrings str can be divided into such that all the substrings are balanced i.e. they have equal number of 0s and 1s. If it is not possible to split str satisfying the conditions then print -1.

Example:

Input: str = “0100110101”
Output: 4
The required substrings are “01”, “0011”, “01” and “01”.

Input: str = “0111100010”
Output: 3
*/
int main()
{
    string s;
    cin>>s;
    int n=s.length();
    
    int count0=0, count1=0, ans=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='0')  count0++;
        if(s[i]=='1')  count1++;
        
        if(count1==count0)
        {
            ans++;
        }
    }
    
    cout<<ans;
}
