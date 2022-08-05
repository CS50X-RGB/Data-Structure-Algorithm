// Problem Link:
// https://leetcode.com/problems/remove-duplicates-from-sorted-list/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp = head;
        ListNode* current = head;
        
        if (current == NULL)
            return NULL;

        while (current->next != NULL){
            if (current->val == current->next->val)
                current->next = current->next->next;
            
            else current = current->next;
        }
        
        return head;
    }
};
