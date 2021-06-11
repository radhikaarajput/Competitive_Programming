class Solution
{
public:
    int longestValidParentheses(string s)
    {
        if(s.length() == 0)  return 0;
        
        
        int n = s.length();        
        int count = 0; // This will store the result of the longest valid parentheses.
        
        std::stack<int> indexStack; 
        indexStack.push(-1); // Start with -1 as the first and topmost elemnent of the stack.

        for(int i = 0; i <n; i++)
        {
            if(s[i] == '(')    indexStack.push(i);
            
            else if(s[i] == ')')
            {
                // For every ‘)’ encountered, we pop the topmost element and subtract the current element's index from the top element of the stack, which gives the  length of the currently encountered valid string of parentheses.
                if(!indexStack.empty()) // Just to make sure we don't try to pop an empty stack.
                {
                    indexStack.pop();
                // If while popping the element, the stack becomes empty, we push the current   element's index onto the stack. In this way, we keep on calculating the lengths of the valid substrings, and return the length of the longest valid string at the end.
                    
                    if(indexStack.empty())
                        indexStack.push(i);
                    else
                        count = std::max(count, i - indexStack.top());
                }
            }  
            
        }

        return count;
    }
};


/*
32. Longest Valid Parentheses
Hard

5282

191

Add to List

Share
Given a string containing just the characters '(' and ')', find the length of the longest valid (well-formed) parentheses substring.

 

Example 1:

Input: s = "(()"
Output: 2
Explanation: The longest valid parentheses substring is "()".
Example 2:

Input: s = ")()())"
Output: 4
Explanation: The longest valid parentheses substring is "()()".
Example 3:

Input: s = ""
Output: 0
 

*/