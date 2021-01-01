
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* oddEvenList(struct ListNode* head){
    if (head == NULL) {
        return NULL;
    }
    struct ListNode* one = head;
    struct ListNode* onehead = one;
    struct ListNode* two = head->next;
    struct ListNode* twohead = two;
    while (two != NULL && two->next != NULL) {
        one->next = one->next->next;
        two->next = two->next->next;
        one = one->next;
        two = two->next;
    }
    one->next = twohead;
    return onehead;
}