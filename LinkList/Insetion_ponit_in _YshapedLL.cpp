
/* 
Given two singly linked lists of size N and M, write a program to get the point where two linked lists intersect each other.

Y ShapedLinked List
Above diagram shows an example with two linked list having 15 as intersection point.

Example 1:

Input:
LinkList1 = {10,20,5,10}
LinkList2 = {30,40,50,5,10}
Output: 5
Explanation:The point of intersection of
two linked list is 5, means both of them
get linked (intersects) with each other
at node whose value is 5.
Your Task:
The task is to complete the function intersetPoint() which finds the point of intersection of two linked list. The function should return data value of a node where two linked lists merge. If linked list do not merge at any point, then it should return -1.

Challenge : Try to solve the problem without using any extra space.

Expected Time Complexity: O(N+M)
Expected Auxiliary Space: O(1)

Constraints:
1 <= N <= 100
1 <= value <= 1000

 

** For More Input/Outpu


Linked List Node
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

/* Should return data of intersection point of two linked
   lists head1 and head2.
   If there is no intersecting point, then return -1. */
int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    
    Node *r=head1, *s=head2, *t, *u;
    int c1=0,c2=0, diff;
    
    while(r !=NULL)
    {
        r= r->next;
        c1++;
    }
    
    while(s!=NULL)
    {
        s= s->next;
        c2++;
    }
    
    diff= abs(c1-c2);
    
    if(c1 > c2)
    {
        t=head1;
        u=head2;
    }
    else
    {
        t=head2;
        u=head1;
    }
    
    while(diff != 0)
    {
        t=t->next;
        diff--;
    }
    
    
    while(t != u)
    {
        t = t->next;
        u = u->next;
        
        if(t == u)
        {
            return t->data;
        }
    }
    
    return -1;
}
