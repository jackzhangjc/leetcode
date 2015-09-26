class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        ListNode original(0);
        original.next = head;
        ListNode* prev = &original;
        
        int i = 0;
        while (i < m - 1) {
            i++;
            prev = prev -> next;
        }
        
        ListNode* const a = prev;
        prev = a -> next;
        ListNode* current = prev -> next;
        i = i + 1;
        
        while (i < n){
            i++;
            prev -> next = current -> next;
            current -> next = a -> next;
            a -> next = current;
            current = prev -> next;
            
        }
        return original.next;
        
        
    }
};