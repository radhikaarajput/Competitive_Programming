
/*
Given a singly linked list consisting of N nodes. The task is to remove duplicates (nodes with duplicate values) from the given list (if exists).
Note: Try not to use extra space. Expected time complexity is O(N). The nodes are arranged in a sorted way.

Example 1:

Input:
N = 4
value[] = {2,2,4,5}
Output: 2 4 5
Explanation: In the given linked list 
2 ->2 -> 4-> 5, only 2 occurs more 
than 1 time.
Example 2:

Input:
N = 5
value[] = {2,2,2,2,2}
Output: 2
Explanation: In the given linked list 
2 ->2 ->2 ->2 ->2, 2 is the only element
and is repeated 5 times.





struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

// root: head node
Node *removeDuplicates(Node *root)
{
 // your code goes here
 
 Node *temp= root->next;
 Node *dub=root;
 
 if(root == NULL) 
    return NULL;
 
 while(temp!=NULL)
 {
     if(dub->data == temp->data)
     {
         dub->next=temp->next;
         temp= dub->next;
         
         
     }
     else
     {
         dub=temp;
         temp=temp->next;
     }
        
 }
 
 return root;
}
