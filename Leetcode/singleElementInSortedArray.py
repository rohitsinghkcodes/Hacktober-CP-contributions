class Solution:
    def func(self, arr=[]):
        n = 0
        while n < len(arr):
            if arr.count(arr[n]) == 2:
                n += 2
            else:
                return(arr[n])
if __name__ == "__main__":
    sol = Solution()
    arr = [int(n) for n in input().split()]
    print(sol.func(arr))