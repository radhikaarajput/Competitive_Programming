
/*

struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }

*/

bool detectLoop(Node* head)
{
    // your code here
    
    Node* a = head;
    Node* b = head;
    while(a && b && b->next != NULL){
    a = a->next;
    b= b->next->next;
    if(a == b){
    return true;
    }
    }
    return false;
}
