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
    bool hasCycle(ListNode *head) {
       set<ListNode*> s;
       ListNode* temp=head;
       while(temp!=NULL)
       {
          if(s.contains(temp->next))
          {
            return true;
          }
          s.insert(temp->next);
          temp=temp->next;
       }
       return false;
    }
};