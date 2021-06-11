class Solution {
public:
    string countAndSay(int n)
    {
        //ans till n iteration
        string ans;
        
        //base case
        if(n==1) return "1";
        if(n==2) return "11";
        ans="11";
        
       
        for(int i=3;i<=n;i++)
        {
            string temp="";  //ans of next ith value i.e. 3,4,5 till n
            ans=ans+'#';    //any delim to end our ans string
            int count=1;    //store consecutive same no
           
                for(int j=1;j<ans.length();j++)   //for next itearion of n, upr 2 tak ka ho cuka starting from 3
                {
                    if(ans[j]==ans[j-1])      //if current no equal to prev ... just inc the count
                    {
                        count++;
                    }
                    else
                    {
                        //first---> add count/freq of no to ans;
                        temp=temp+to_string(count);
                        
                        //sec-->add actual no to ans;
                        temp= temp+ans[j-1];
                        
                        //for next iteration of n, 
                        count=1;
                    }
                    
                }
             ans=temp;    //update your ans, and move for next iteration, do till n
            
        }
        
        return ans;
    }
};


/**
 * 
 * 
 * 38. Count and Say
Medium

494

1637

Add to List

Share
The count-and-say sequence is a sequence of digit strings defined by the recursive formula:

countAndSay(1) = "1"
countAndSay(n) is the way you would "say" the digit string from countAndSay(n-1), which is then converted into a different digit string.
To determine how you "say" a digit string, split it into the minimal number of groups so that each group is a contiguous section all of the same character. Then for each group, say the number of characters, then say the character. To convert the saying into a digit string, replace the counts with a number and concatenate every saying.

For example, the saying and conversion for digit string "3322251":


Given a positive integer n, return the nth term of the count-and-say sequence.

 

Example 1:

Input: n = 1
Output: "1"
Explanation: This is the base case.
Example 2:

Input: n = 4
Output: "1211"
Explanation:
countAndSay(1) = "1"
countAndSay(2) = say "1" = one 1 = "11"
countAndSay(3) = say "11" = two 1's = "21"
countAndSay(4) = say "21" = one 2 + one 1 = "12" + "11" = "1211"
 
*/