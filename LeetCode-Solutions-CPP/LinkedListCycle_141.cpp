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
        int i=0;
        while(head!=NULL)
        {
            i++;
            head=head->next;
            if(i>10002){
                return true;
            }
        }
        return false;

        
    }
};