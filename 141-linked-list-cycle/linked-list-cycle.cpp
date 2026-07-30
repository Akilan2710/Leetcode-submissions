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
        if(!head || !head->next){
            return false;
        }
        ListNode *p=head->next,*q=head->next->next;
        while(p->next && q->next && q->next->next){
            if(p==q){
                return true;
            }
            p=p->next;
            q=q->next->next;
        }
        return false;
    }
};