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
    ListNode* reverse(ListNode* temp)
    {
        ListNode* front;
        ListNode* curr=temp;
        ListNode* prev=NULL;
        while(curr!=NULL)
        {
            front=curr->next;
            curr->next=prev;
            prev=curr;
            curr=front;
        }
        return prev;
    }
    void reorderList(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL&&fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* lastNodes=reverse(slow->next);
        ListNode* n;
        ListNode* ln;
        slow->next=NULL;
        ListNode*  frontNode=head;
        while(lastNodes!=NULL)
        {
            n=frontNode->next;
            frontNode->next=lastNodes;
            ln=lastNodes->next;
            lastNodes->next=n;
            frontNode=n;
            lastNodes=ln;
        }
    }
};