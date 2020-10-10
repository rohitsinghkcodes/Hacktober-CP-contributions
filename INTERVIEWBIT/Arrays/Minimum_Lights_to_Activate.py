class Solution:
    # @param A : list of integers
    # @param B : integer
    # @return an integer
    def solve(self, A, B):
        n = len(A)
        ans = 0;
        last = -1;
        while (last < n - 1):
            pos = -1
            end = max(-1,last - B + 1)
            start = min(n-1,last + B)
            for i in range( start, end , -1):
                if (A[i] == 1 and i - B <= last):
                    pos = i;
                    break;
                
            
            if (pos == -1):
                return -1
            
            ans = ans + 1
            last = pos + B - 1
        
        return ans
