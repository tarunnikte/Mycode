struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    struct ListNode *ptr,*qtr;
    ptr=headA;
    qtr=headB;
    if(headA==NULL || headB==NULL){
        return NULL;
    }
    while(ptr!=qtr)
    {
        ptr=(ptr==NULL)?headB:ptr->next;
        qtr=(qtr==NULL)?headA:qtr->next;
       
    }
     return ptr;
}
