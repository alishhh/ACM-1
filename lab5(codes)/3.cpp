class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *ft = head, *sw = head;
        
        while(ft->next && ft){
            ft = ft->next->next;
            sw = sw->next;
            if(ft == sw) return true;
        }
        
        return false;
    }
};
