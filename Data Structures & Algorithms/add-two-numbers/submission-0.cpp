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
    ListNode* reverse(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;
        while (curr != NULL) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        ListNode* temp = new ListNode(0);
        ListNode* head = temp;
        int carry=0;
        while(temp1 || temp2 || carry){
            int sum = carry;
            if (temp1) {
                sum += temp1->val;
                temp1 = temp1->next;
            }
            if (temp2) {
                sum += temp2->val;
                temp2 = temp2->next;
            }
            carry = sum / 10;
            temp->val = sum % 10;
            if (temp1 || temp2 || carry) {
                temp->next = new ListNode(0);
                temp = temp->next;
            }
        }
        return head;
    }
};
