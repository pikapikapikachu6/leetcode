/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* partition(struct ListNode* head, int x){
    struct ListNode* leftNode = malloc(sizeof(struct ListNode));
    struct ListNode* left = leftNode;
    struct ListNode* rightNode = malloc(sizeof(struct ListNode));
    struct ListNode* right = rightNode;
    while (head != NULL) {
        if (head->val < x) {
            leftNode->next = head;
            leftNode = leftNode->next;
        } else {
            rightNode->next = head;
            rightNode = rightNode->next;
        }
        head = head->next;
    }
    rightNode->next = NULL;
    leftNode->next = right->next;
    return left->next;
}