class Solution{
  public:
    
    //Function to sort the given linked list using Merge Sort.
    
        
    
        Node* MergeList(Node* firstLL,Node* secLL)
        {
            Node* ans=NULL;
            
            if(!firstLL) return secLL;
            if(!secLL) return firstLL;
            
            
            if(firstLL->data <= secLL->data)
            {
                ans=firstLL;
                ans->next=MergeList(firstLL->next, secLL);
            }
            else
            {
                ans=secLL;
                ans->next=MergeList(firstLL, secLL->next);
            }
        }
        
        
        void mergeSorting(Node** head) 
        {
            //find tail
            Node* cur= *head;
            
            if(!cur && !cur->next) return;
       
            //find middle
            Node* firstLL;
            Node* secLL;
            
            //MidNode(head,&firstLL,&secLL);
            MidNode(head, &firstLL, &secLL);
            mergeSort(&firstLL);
            mergeSort(&secLL);
            head= mergeBoth(firstLL,secLL);
        }
    
   
        Node* mergeSort(Node* head) 
        {
            mergeSorting(&head);
            return head;
        }
    
    
    void MidNode(Node head, Node** firstLL, Node** secLL)
        {
            Node* fast=head;
            Node* slow=head;
            
            Node* tail= head;
            while(tail->next != NULL)
            {
                tail= tail->next;
            }
            
            
            //fast->next!=tail even list so not go to null fast or stop it before
            while(slow!=tail  &&  fast->next!=tail)
            {
                fast= fast->next->next;
                slow=slow->next;
            }
            
            *firstLL=head;
            *secLL=slow->next;
            slow->next=NULL;
        }
    
};
