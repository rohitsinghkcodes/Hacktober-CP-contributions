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
    ListNode* partition(ListNode* head, int x) {
        ListNode* a=new ListNode(-1);
        ListNode* b=new ListNode(-1);
        ListNode* c=a;
        ListNode* d=b;
        b->next=head;
        while(b!=NULL && b->next!=NULL){
            if(b->next->val<x){
                a->next=new ListNode(b->next->val);
                a=a->next;
                b->next=b->next->next;
            }
            else{
                b=b->next;
            }
        }
        a->next=d->next;
        return c->next;
    }
};
