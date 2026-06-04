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
    ListNode* findUpToRight(ListNode* temp,int right,int c)
    {
        // ListNode* temp=head;
        while(c<right&&temp!=NULL)
        {
            temp=temp->next;
            c++;
        }
        return temp;
    }
    ListNode* reverse(ListNode* head)
    {
        ListNode* front;
        ListNode* curr=head;
        ListNode* prev=NULL;
        while(curr!=NULL)
        {
            front=curr->next;
            curr->next=prev;
            prev=curr;
            curr= front;
        }
        return prev;
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head==NULL||head->next==NULL) return head;
        if(left==right) return head;
        ListNode* temp=head;
        ListNode* prevNode=NULL;
        int c=1;
        while(c<left&&temp!=NULL)
        {
            prevNode=temp;
            temp=temp->next;
            c++;
        }
        ListNode* nodesToReverse=findUpToRight(temp,right,c);
        // return nodesToReverse;
        ListNode* newNode=NULL;
        if(nodesToReverse->next!=NULL)
            newNode=nodesToReverse->next;
        nodesToReverse->next=NULL;
        // return reverse(temp);
        // if(head==temp) return reverse(head);
        ListNode* revHead=reverse(temp);
        // reverse(temp);
        if(prevNode!=NULL)
            prevNode->next=revHead;
        else
            head=revHead;
        temp->next=newNode;
        return head;
    }
};