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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int l=0;
        ListNode* temp = head;
        while(temp != NULL){
            l++;
            temp = temp->next;
        }
        if (l == n)
            return head->next;
        ListNode* temp2 = head;
        int s=l-n-1;
        while(s){
            temp2=temp2->next;
            s--;
        }
        temp2->next = temp2->next->next;
        return head;
    }
};
