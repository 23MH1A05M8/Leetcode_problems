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
        // if(head==NULL)
        // {
        //     return NULL;
        // }
        // if(head->next==NULL)
        // {
        //     return head;
        // }
        ListNode* sumHead=nullptr;
        ListNode* sumTail=nullptr;
        ListNode* temp=head->next;
        int s=0;
        while(temp != NULL)
        {
            if(temp->val!=0)
            {
                s+=temp->val;
            }
            if(temp->val==0)
            {   
                ListNode* newNode=new ListNode(s);
                if(sumHead == NULL &&sumTail == NULL){
                    sumHead  = newNode;
                    sumTail = sumHead;
                }
                else{
                    sumTail -> next = newNode;
                    sumTail = sumTail->next;
                }
                s=0;
            }
           if(temp!=NULL) temp=temp->next;
        }
        return sumHead;
    }
};