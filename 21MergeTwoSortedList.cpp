
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        ListNode *p1 = l1;
        ListNode *p2 = l2;
        ListNode *dummyNode = new ListNode(-1);
        ListNode *p3 = dummyNode;
        
        while(p1 != NULL && p2 != NULL)
        {
            if(p1->val < p2->val)
            {
                p3->next = p1;
                p1 = p1->next;
            }
            else
            {
              p3->next = p2;
              p2=p2->next;
            }
            p3 = p3->next;
        }
        
        while(p1 != NULL)
        {
            p3->next = p1;
            p1 = p1->next;
            p3 = p3->next;
        }
        
        while(p2 != NULL)
        {
            p3->next = p2;
            p2 = p2->next;
            p3= p3->next;
        }
        
        return dummyNode->next;
    }
};