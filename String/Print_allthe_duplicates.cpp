
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int n=s.length();
    
    map<char, int>count;
    
    for(int i=0;i<n;i++)
    {
        count[s[i]]++;
    }
    
    for (auto it : count) 
    {
        if (it.second > 1)
            cout << it.first << ", count = " << it.second<< "\n";
    }
    return 0;
}
