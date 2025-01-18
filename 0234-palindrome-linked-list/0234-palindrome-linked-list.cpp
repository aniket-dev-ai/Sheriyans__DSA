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
    // Function to find the middle of the linked list
    ListNode* findMiddle(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    // Function to reverse a linked list from a given node
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;
        while (curr != NULL) {
            ListNode* nextTemp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextTemp;
        }
        return prev;
    }

    // Function to compare two linked lists
    bool compareLists(ListNode* head1, ListNode* head2) {
        while (head2 != NULL) { // Only compare up to the length of the second list
            if (head1->val != head2->val) {
                return false;
            }
            head1 = head1->next;
            head2 = head2->next;
        }
        return true;
    }

    // Main function to check if a linked list is a palindrome
    bool isPalindrome(ListNode* head) {
        if (head == NULL || head->next == NULL) {
            return true; // Empty or single-node list is always a palindrome
        }

        // Step 1: Find the middle of the list
        ListNode* middle = findMiddle(head);

        // Step 2: Reverse the second half of the list
        ListNode* secondHalf = reverseList(middle);

        // Step 3: Compare the two halves
        bool result = compareLists(head, secondHalf);

        // Step 4 (Optional): Restore the second half of the list
        reverseList(secondHalf);

        return result;
    }
};
