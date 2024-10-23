class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        struct ListNode*ptr,*prev=NULL;
        ptr=head;
        int count=0;
        if(head==NULL)
        {
            return head;
        }
        if(head->next==NULL)
        {
            head=NULL;
            return head;
        }
        while(ptr!=NULL)
        {
            count++;
            ptr=ptr->next;
        }
        ptr=head;
        count=count/2;
        for(int i=0;i<count;i++)
        {
            prev=ptr;
            ptr=ptr->next;
        }
        prev->next=ptr->next;
        return head;
    }   
};
