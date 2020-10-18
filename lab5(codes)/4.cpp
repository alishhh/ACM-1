class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *head1 = headA, *head2 = headB;
        while (head1 && head2) {
            if (head1 == head2) return head1;
            head1 = head1->next;
            head2 = head2->next;
            if (!head1 && !head2) return NULL;
            if (!head1) head1 = headB;
            if (!head2) head2 = headA;
        }
        
        return NULL;
    }
};
