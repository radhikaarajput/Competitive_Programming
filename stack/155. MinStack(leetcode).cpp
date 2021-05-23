class MinStack {
public:
    /** initialize your data structure here. */
    int tp;
    int mtop;
    int s[10000];
    int mins[10000];
    MinStack() 
    {
        tp=-1;
        mtop=-1;
    }
    
    void push(int x)
    {
        if(tp<10000)
        {
            tp++;
            s[tp]=x;
        }
        
         if(mtop<10000)
        {
             if(x < mins[mtop])
             {
                 mtop++;
                 mins[mtop]=x;
             }
             else
             {
                mtop++;
                 mins[mtop]=mins[mtop-1];
             }
        }
    }
    
    void pop() 
    {
        tp--;
        mtop--;
    }
    
    int top() 
    {
        return s[tp];    
    }
    
    int getMin() {
        return mins[mtop]; 
        
    }
};

/*
Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

Implement the MinStack class:

MinStack() initializes the stack object.
void push(val) pushes the element val onto the stack.
void pop() removes the element on the top of the stack.
int top() gets the top element of the stack.
int getMin() retrieves the minimum element in the stack.
 

Example 1:

Input
["MinStack","push","push","push","getMin","pop","top","getMin"]
[[],[-2],[0],[-3],[],[],[],[]]

Output
[null,null,null,null,-3,null,0,-2]

Explanation
MinStack minStack = new MinStack();
minStack.push(-2);
minStack.push(0);
minStack.push(-3);
minStack.getMin(); // return -3
minStack.pop();
minStack.top();    // return 0
minStack.getMin(); // return -2
 

Constraints:

-231 <= val <= 231 - 1
Methods pop, top and getMin operations will always be called on non-empty stacks.
At most 3 * 104 calls will be made to push, pop, top, and getMin.
*/