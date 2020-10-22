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
    int getDecimalValue(ListNode* head) {
        ListNode* front=head;
        int size=-1;
        while(front!=NULL)
        {
            size++;
            front=front->next;
        }
        int ans=0;
        while(head!=NULL)
        {
            int val=( (head->val)* pow(2,size));
          //  cout<<val<< " "<< head->val<<" "<<pow(2,size)<<" "<<size; 
            ans+=val;
            size--;
            head=head->next;
        }
        return ans;
        

        
    }
};