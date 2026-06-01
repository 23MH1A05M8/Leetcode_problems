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
    ListNode* reverse(ListNode* head)
    {
        ListNode* prev=NULL;
        ListNode* front;
        ListNode* curr=head;
        while(curr!=NULL)
        {
            front=curr->next;
            curr->next=prev;
            prev=curr;
            curr=front;
        }
        return prev;
    }
    ListNode* removeNodes(ListNode* head) {
       head=reverse(head);
       int maxval=head->val;
       ListNode* curr=head;
       while(curr->next!=NULL)
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
       head=reverse(head);
       return head;
    }
};