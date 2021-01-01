/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* reverseList(struct ListNode* head){
    struct ListNode *res = NULL, *cur = head;
    while (head != NULL) {
        head = head->next;
        cur->next = res;
        res = cur;
        cur = head;
    }
    return res;
}