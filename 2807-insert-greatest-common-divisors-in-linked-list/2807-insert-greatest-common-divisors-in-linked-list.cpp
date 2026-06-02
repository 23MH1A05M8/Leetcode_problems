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
    ListNode* findGCD(int a,int b){
        while(b!=0)
        {
            int temp=b;
            b=a%b;
            a=temp;
        }
        ListNode* res=new ListNode(a);
        return res;
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head==NULL||head->next==NULL) return head;
        ListNode* temp=head;
        ListNode* front;
        while(temp->next!=NULL)
        {
            ListNode* newNode=findGCD(temp->val,temp->next->val);
            front=temp->next;
            temp->next=newNode;
            newNode->next=front;
            temp=front;
        }
        return head;
    }
};