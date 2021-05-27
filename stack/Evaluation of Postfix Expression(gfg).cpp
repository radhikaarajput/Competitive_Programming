

class Solution
{
    public:
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string S)
    {
        // Your code here
        stack<int>s;
        int a,b,ans;
        char c;
        for(int i=0;i<S.length();i++)
        {
            c=S[i];
            if(isdigit(S[i])) s.push(c-'0');
             else
                { 
                    int val1 = s.top(); 
                    s.pop();
                    int val2 = s.top();
                    s.pop();
                    switch (c) 
                    { 
                    case '+': s.push(val2 + val1); break; 
                    case '-': s.push(val2 - val1); break; 
                    case '*': s.push(val2 * val1); break; 
                    case '/': s.push(val2/val1); break; 
                    } 
                } 
        }
        
        return(s.top());
    }
};