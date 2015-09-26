#include <iostream>
using namespace std;

struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x): val(x), next(NULL) {}
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode result(0);
    ListNode* current = &result;
    //current = current->next;

    int carryover = 0;

    while ((l1 != NULL) || (l2 != NULL)) {
        int a = 0;
        int b = 0;
        if (l1 != NULL) {
            a = l1->val;
            l1 = l1->next;
        }
        if (l2 != NULL) {
            b = l2->val;
            l2 = l2->next;
        }
        int c = a + b + carryover;
        if (c > 9) {
            carryover = c/10;
            c = c % 10;
        } else carryover = 0;
        current->next = new ListNode(c);
        current = current->next;
    }
    if (carryover > 0){
        current->next = new ListNode(1);
    }
    return result.next;
}

int main(){
    ListNode* a = new ListNode(0);
    ListNode* b = new ListNode(0);
    ListNode* c = addTwoNumbers(a,b);
    cout << c->val;
    
}
