class Solution:
    # @param A : head node of linked list
    # @return the head node in the linked list
    def solve(self, a):
        temp=a
        l=[]
        i=1
        l1=[]
        while(temp!=None):
            l.append(temp.val)
            if(i%2==0):
                l1.append(temp.val)
            temp=temp.next
            i+=1
        l1.reverse()
        j=0
        for i in range(1,len(l),2):
            l[i]=l1[j]
            j+=1
        def insert(root,item):
            temp=ListNode(0)
            temp.val=item
            temp.next=root
            root=temp
            return root
        root=None
        for i in range(len(l)-1,-1,-1):
            root=insert(root,l[i])
        return root