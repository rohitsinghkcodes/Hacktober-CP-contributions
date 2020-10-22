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
    bool isPalindrome(ListNode* head) {
        ListNode* frontA=head;
        ListNode* frontB=head;
        ListNode* temp=head;
        int size=0;
        while(temp!=NULL)
        {
            size++;
            temp=temp->next;
        }
        if(size==0 || size==1)
        {
            return true;
        }
        ListNode* middle=NULL;
        while(frontA!=NULL && frontA->next!=NULL && frontB!=NULL && frontB->next!=NULL && frontB->next->next!=NULL)
        {
            frontA=frontA->next;
            frontB=frontB->next->next;
        }
        middle=frontA;
        ListNode* cur=middle->next;
        ListNode* prev=NULL;
        ListNode* next=NULL;
        while(cur!=NULL)
        {
            next=cur->next;
            cur->next=prev;
            prev=cur;
            cur=next;
        }
        ListNode* temp2=prev;
        middle->next=prev;
        cout<<head->val;
        while(head!=temp2 && head!=NULL && prev!=NULL)
        {
            cout<<"here\n";
            if(head->val != prev->val)
            {
                return false;
            }
            head=head->next;
            prev=prev->next;
                
        }
        return true;
        
        
    }
};