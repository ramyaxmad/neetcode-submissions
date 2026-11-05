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
    ListNode* reverseList(ListNode* head) {
        //edge case1, empty list
        if (head == nullptr)
            return head;
        ListNode* curr = head->next; //point to address since pointers cant take in a value
        //edge case2, head points to null,
        if (curr == nullptr)
            return head;
        ListNode* next = curr->next;
        head->next = nullptr;
        while (next != nullptr){
            curr->next = head;
            head = curr;
            curr = next;
            next = next->next;
        }
        curr->next = head;
        head = curr;
        return head;
    }
};
