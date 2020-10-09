class Solution:
    # @param A : head node of linked list
    # @param B : integer
    # @return an integer
    def solve(self, A, B):
        lenL = 0
        head = thead = A
        
        # Calculate length of linked list
        while head is not None:
            head = head.next
            lenL += 1
        
        mid = (lenL//2) + 1
        
        # Find kth node
        if B < mid:
            j = 0
            while thead is not None:
                if j == mid - B - 1:
                    return thead.val
                thead = thead.next
                j += 1
        else:
            return -1
        
