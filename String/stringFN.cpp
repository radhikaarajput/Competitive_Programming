#include<iostream>
using namespace std;
#include <string.h>
int main( )
{
	char str[80];
	
	cout << "Enter a string: ";
	cin.getline(str,80);
	
	
	char str2[80];
	
	cout << "Enter a string: ";
	cin.getline(str2,80);
    
    if(strcmp(str,str2)==0)
        cout<<"\nString equal";
    else
        cout<<"Not equal string";
        
    strcat(str, str2);
    cout<<"\nConcatenated String: "<<str;

	return 0;
}