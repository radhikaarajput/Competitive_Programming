
/*
Given a singly linked list of size N. The task is to swap elements in the linked list pairwise.
For example, if the input list is 1 2 3 4, the resulting list after swaps will be 2 1 4 3.

Input:
The first line of input contains the number of test cases T. For each test case, the first line of input contains the length of the linked list and the next line contains linked list data.

Output:
Output the linked list after swapping pairwise nodes.

User Task:
The task is to complete the function pairWiseSwap() which takes the head node as the only argument and returns the modified head.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).

Constraints:
1 <= T <= 100
1 <= N <= 103

Example:
Input:
1
8
1 2 2 4 5 6 7 8

Output:
2 1 4 2 6 5 8 7

Explanation:
Testcase 1: After swapping each pair considering (1,2), (2, 4), (5, 6).. so on as pairs, we get 2, 1, 4, 2, 6, 5, 8, 7 as a new linked list.
 
 
 
 
 
  Pairwise swap a linked list
  The input list will have at least one element
  node is defined as

struct node
{
    int data;
    struct node* next;

    node(int x){
        data = x;
        next = NULL;
    }

}*head;
*/

Node* pairWiseSwap(struct Node* head) {
    // The task is to complete this method
    
    Node *temp1= head;
    
    int val;
    
        
    while( temp1 != NULL && temp1->next!= NULL)
    {
        val= temp1->data;
        temp1->data= temp1->next->data;
        temp1->next->data= val;
        
        temp1= temp1->next->next;
        
    }
    
    return head;
    
}
