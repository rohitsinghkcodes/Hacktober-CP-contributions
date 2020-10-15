class Solution:
    def func(self, A=[]):

        maxsofar = A[0]
        currmax = A[0]
        minsofar = A[0]
        currmin = A[0]

        for n in A[1:]:
            currmax = max(n, currmax + n)
            maxsofar = max( currmax , maxsofar)
            currmin = min(n, currmin + n)
            minsofar = min(currmin, minsofar)

            if sum(A) == minsofar:
                return maxsofar
            return maxsofar

if __name__ == "__main__":
    sol = Solution()
    arr = [int(n) for n in input().split()]
    print(sol.func(arr))
