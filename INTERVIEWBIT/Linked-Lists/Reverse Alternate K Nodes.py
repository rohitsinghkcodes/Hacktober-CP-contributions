# Definition for singly-linked list.
# class ListNode:
#    def __init__(self, x):
#        self.val = x
#        self.next = None
def kAltReverse(head, k) :  
    current = head  
    next = None
    prev = None
    count = 0
  
    #1) reverse first k nodes of the linked list  
    while (current != None and count < k) :  
        next = current.next
        current.next = prev  
        prev = current  
        current = next
        count = count + 1; 
      
    # 2) Now head pos to the kth node.  
    # So change next of head to (k+1)th node 
    if(head != None):  
        head.next = current  
  
    # 3) We do not want to reverse next k  
    # nodes. So move the current  
    # poer to skip next k nodes  
    count = 0
    while(count < k - 1 and current != None ):  
        current = current.next
        count = count + 1
      
    # 4) Recursively call for the list  
    # starting from current.next. And make 
    # rest of the list as next of first node  
    if(current != None):  
        current.next = kAltReverse(current.next, k)  
  
    # 5) prev is new head of the input list  
    return prev  
class Solution:
    # @param A : head node of linked list
    # @param B : integer
    # @return the head node in the linked list
    def solve(self, A, B):
        return kAltReverse(A,B);
