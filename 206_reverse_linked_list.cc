#include <iostream>

Struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x): val(x), next(NULL) {}
};
class Solution {
public:
    ListNode* reverseList(ListNode* head){
        ListNode* next;
        ListNode* previous = NULL;
        while (head != NULL) {
            next = head->next;
            head->next = previous;
            previous = head;
            head = next;
        }
        return previous;
    }
};

int main(){
   ListNode* a(1);
   ListNode* b(2);
   ListNode* c(3);
   a->next = b;
   b->next = c;
   ListNode* d = reverseList
   return 0;
} 
