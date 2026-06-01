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
    ListNode* kNode(ListNode* temp,int k)
    {
        int c=1;
        while(temp!=NULL&&c<k)
        {
            temp=temp->next;
            c++;
        }
        return temp;
    }
    ListNode* reverse(ListNode* temp)
    {
        ListNode* prev=NULL;
        ListNode* curr=temp;
        ListNode* front;
        while(curr!=NULL)
        {
            front=curr->next;
            curr->next=prev;
            prev=curr;
            curr=front;
        }
        return prev;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp=head;
        ListNode* prevNode=NULL;
        while(temp!=NULL)
        {
            ListNode* kthnode=kNode(temp,k);
            ListNode* newNode;
            // cout<<kthnode->val<<" ";
            if(kthnode==NULL)
            {
                if(prevNode) prevNode->next=temp;
                break;
            }
            newNode=kthnode->next;
            kthnode->next=NULL;
            reverse(temp);
            // return temp;
            if(temp==head)
            {
                head=kthnode;
            }
            else{
                prevNode->next=kthnode;
            }
            prevNode=temp;
            temp=newNode;
        }
        return head;
    }
};