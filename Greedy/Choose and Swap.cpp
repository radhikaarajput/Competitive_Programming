class Solution{
public:
    string chooseandswap(string a)
    {
        // Code Here
        int n=a.length();
        //enter all string in ser--->contains elements in sorted order
        set<char>s;
        for(int i=0;i<n;i++)
        {
            s.insert(a[i]);
        }
        
        for(int i=0;i<n;i++)
        {
             //first elemet at beg of string a,pop from set this
            s.erase(a[i]);
            
            if(s.empty())  break;  //done with lexicographically smallest string , not exist
            
            int first=a[i];
            char sec= *s.begin();
            
            //now check if first>sec, swap all occurrences of first with sec
            if(first>sec)
            {
                for(int j=0;j<n;j++)
                {
                    if(a[j]==first)  a[j]=sec;
                    else if(a[j]==sec)   a[j]=first;
                  
                }
                  break;  //to do this just once swapping, so exit
            }
        }
        
        return a;
    }
    
};

/*
Choose and Swap 
Easy Accuracy: 31.93% Submissions: 4853 Points: 2
You are given a string s of lower case english alphabets. You can choose any two characters in the string and replace all the occurences of the first character with the second character and replace all the occurences of the second character with the first character. Your aim is to find the lexicographically smallest string that can be obtained by doing this operation at most once.

Example 1:

Input:
A = "ccad"
Output: "aacd"
Explanation:
In ccad, we choose ‘a’ and ‘c’ and after 
doing the replacement operation once we get, 
aacd and this is the lexicographically
smallest string possible. 
 

Example 2:

Input:
A = "abba"
Output: "abba"
Explanation:
In abba, we can get baab after doing the 
replacement operation once for ‘a’ and ‘b’ 
but that is not lexicographically smaller 
than abba. So, the answer is abba. 

Your Task:  
You don't need to read input or print anything. Your task is to complete the function chooseandswap() which takes the string A as input parameters and returns the lexicographically smallest string that is possible after doing the operation at most once.

Expected Time Complexity: O(|A|) length of the string A
Expected Auxiliary Space: O(1)

 

Constraints:
1<= |A| <=105

 

*/