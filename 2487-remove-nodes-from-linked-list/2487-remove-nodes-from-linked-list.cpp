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
    ListNode* reversenode(ListNode* head)
    {
        ListNode* prev = nullptr;
        ListNode* curr = head;

        while (curr != nullptr)
        {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    ListNode* removeNodes(ListNode* head) {
       head=reversenode(head);
       int maxval=head->val;
       ListNode* curr=head;
       while(curr&&curr->next)
       {
            if(curr->next->val<maxval)
            {
                curr->next=curr->next->next;
            }
            else{
                curr=curr->next;
                maxval=curr->val;

            }
       }
       head=reversenode(head);
       return head;
    }
};