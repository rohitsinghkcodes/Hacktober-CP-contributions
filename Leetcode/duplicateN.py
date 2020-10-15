class Solution:
    def func(self, arr=[]):
        zeros = arr.count(0)
        if zeros > 1:
            return True
        for i in range(len(arr)):
            for j in range(0, len(arr)):
                if arr[i] == 2 * arr[j] and arr[i] != 0:
                    print(arr[i], arr[j])
                    return True
        return False


if __name__ == "__main__":
    sol = Solution()
    arr = [int(n) for n in input().split()]
    print(sol.func(arr))
