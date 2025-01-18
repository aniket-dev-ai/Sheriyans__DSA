class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head || !head->next) return head; // Handle empty or single-node list.

        ListNode* current = head;
        
        while (current && current->next) {
            if (current->val == current->next->val) {
                ListNode* temp = current->next;
                current->next = current->next->next;
                delete temp;
            } else {
                current = current->next;
            }
        }
        
        return head;
    }
};
