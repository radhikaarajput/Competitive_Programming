
class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    static bool compare(Item i1, Item i2)
    {
        double ratio1= double((double)i1.value/(double)i1.weight);
        double ratio2= double((double)i2.value/(double)i2.weight);
        return ratio1 > ratio2;
    }
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        // sort according to value/weight first
        sort(arr,arr+n,compare);
        
        double weigTillNow=0.0;
        double weigCanAdd=0.0;
        double valTillNow=0.0;
        
        
        for(int i=0;i<n;i++)
        {
            if(arr[i].weight <= W)
            {
                weigTillNow+=arr[i].weight;
                valTillNow+=arr[i].value;
                W-=arr[i].weight;
            }
            else
            {
                weigCanAdd=double((double)arr[i].value/(double)arr[i].weight);
                
                valTillNow+= double(weigCanAdd*W);
                break;
            }
        }
        
        return valTillNow;
    }
        
};



/*


Fractional Knapsack 
Medium Accuracy: 45.14% Submissions: 22149 Points: 4
Given weights and values of N items, we need to put these items in a knapsack of capacity W to get the maximum total value in the knapsack.
Note: Unlike 0/1 knapsack, you are allowed to break the item. 

 

Example 1:

Input:
N = 3, W = 50
values[] = {60,100,120}
weight[] = {10,20,30}
Output:
240.00
Explanation:Total maximum value of item
we can have is 240.00 from the given
capacity of sack. 
Example 2:

Input:
N = 2, W = 50
values[] = {60,100}
weight[] = {10,20}
Output:
160.00
Explanation:
Total maximum value of item
we can have is 160.00 from the given
capacity of sack.
 

Your Task :
Complete the function fractionalKnapsack() that receives maximum capacity , array of structure/class and size n and returns a double value representing the maximum value in knapsack.
Note: The details of structure/class is defined in the comments above the given function.


Expected Time Complexity : O(NlogN)
Expected Auxilliary Space: O(1)


**//