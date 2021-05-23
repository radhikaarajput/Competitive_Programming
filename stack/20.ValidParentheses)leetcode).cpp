class Solution {
public:
    bool isValid(string s) 
    {
        stack<char> r;
        
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(' || s[i]=='{'|| s[i]=='[')
                r.push(s[i]);
            else if((s[i]==')' || s[i]==']' || s[i]=='}')  && r.empty())
               return false;
            else if(s[i]==')'  && r.top()=='(')
                r.pop();
            else if(s[i]==']'  && r.top()=='[')
                r.pop();
            else if(s[i]=='}'  && r.top()=='{')
                r.pop();
            else
                r.push(s[i]);
        }
        
        if(r.empty())
            return true;
        
        return false;
        
        
    }
};

/*
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
 

Example 1:

Input: s = "()"
Output: true
Example 2:

Input: s = "()[]{}"
Output: true
Example 3:

Input: s = "(]"
Output: false
Example 4:

Input: s = "([)]"
Output: false
Example 5:

Input: s = "{[]}"
Output: true
 

Constraints:

1 <= s.length <= 104
s consists of parentheses only '()[]{}'.
*/