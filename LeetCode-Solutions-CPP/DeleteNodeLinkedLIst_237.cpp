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
    void deleteNode(ListNode* node) {
        vector<int> V;
        ListNode* front=node;
        front=front->next;
        while(front!=NULL)
        {
            V.push_back(front->val);
            cout<<front->val<<" ";
            front=front->next;
        }
        int i=0;
       // cout<<node->val;
        while(node->next->next!=NULL)
        {
            node->val= V[i];
            cout<<"Node value is: "<<node->val<<" ";
            i++;
            node=node->next;
        }
        
        //free(node->next);
        node->next=NULL;
        node->val=V[i];
        
        
        
    }
};