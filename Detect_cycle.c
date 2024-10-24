class Solution {
public:
    bool hasCycle(ListNode *head)
     {
        struct ListNode*slow,*fast;
        slow=head;
        fast=head;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                return true;}
        }
        return false;
    }
};
