class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       struct ListNode*ptr;
    ptr=head;
    int count=0;
    if(head==NULL)return head;
    if(head->next==NULL)return NULL;
    while(ptr!=NULL)
    {
        count++;
        ptr=ptr->next;
    }
    if(count==n){
        head=head->next;
        return head;
    }
    ptr=head;
    int a=count-n;
    for(int i=1;i<a;i++)
    {
        ptr=ptr->next;
    }
    ptr->next=ptr->next->next;
    return head;
    }
};