/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        set<ListNode*> s1;
        if(headA==headB) return headA;
        ListNode* temp=headA;
        ListNode* temp1=headB;
        while(temp!=NULL)
        {
            s1.insert(temp);
            temp=temp->next;
        }
        while(temp1!=NULL)
        {
            if(s1.contains(temp1))
            {
                return temp1;
            }
            temp1=temp1->next;
        }
        return NULL;
    }
};