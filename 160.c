/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    int lenA = 0, lenB = 0;
    struct ListNode *temp1 = headA;
    struct ListNode *temp2 = headB;
    while (temp1) {
        lenA = lenA + 1;
        temp1 = temp1->next;
    }
    while (temp2) {
        lenB = lenB + 1;
        temp2 = temp2->next;
    }
    temp1 = headA;
    temp2 = headB;
    while (lenB > lenA) {
        lenB = lenB - 1;
        temp2 = temp2->next;
    }
    while (lenB < lenA) {
        lenA = lenA - 1;
        temp1 = temp1->next;
    }
    while (temp1) {
        if (temp1 == temp2) {
            return temp1;
        } else {
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
    }
    return NULL;
}
