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
    ListNode* mergeNodes(ListNode* head) {
       ListNode* res=new ListNode();
       ListNode* temp=res;
       ListNode* curr=head->next;
       int s=0;
       while(curr!=NULL)
       {
            s+=curr->val;
            if(curr->val==0)
            {
                ListNode* sum=new ListNode(s);
                temp->next=sum;
                temp=temp->next;
                s=0;
            }
            curr=curr->next;
       }
       return res->next;
    }
};