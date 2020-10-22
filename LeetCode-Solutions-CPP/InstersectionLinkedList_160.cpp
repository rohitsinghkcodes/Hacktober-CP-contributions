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
        int sizeA=0;
        int sizeB=0;
        ListNode *frontA= NULL;
        ListNode* frontB=NULL;
        frontA=headA;
        frontB=headB;
        while(frontA!=NULL)
        {
            sizeA++;
            frontA=frontA->next;
        }
        while(frontB!=NULL)
        {
            sizeB++;
            frontB=frontB->next;
        }
        int diff,i=0;
        if(sizeA>sizeB)
        {
            diff=sizeA-sizeB;
            while(i<diff)
            {
                headA=headA->next;
                i++;
                
            } 
        }
        if(sizeB>sizeA)
        {
            diff= sizeB-sizeA;
            while(i<diff)
            {
                headB=headB->next;
                i++;
            }
        }
        while(headA!=NULL && headB!=NULL)
        {
            if(headA== headB)
                return headA;
            else{
                headA=headA->next;
                headB=headB->next;
            }
        }
            
        return NULL;
        
        
        
        
        
        
        
    }
};