class solution:
    def removelem(self, nums=[],val=0):
        for i in range(len(nums)-1, -1 , -1):
            if nums[i] == val:
                nums.pop(i)
        return(len(nums),nums)

if __name__ == "__main__":
    sol = solution()
    _ = [int(n) for n in input().split()]
    val = int(input())
    print(sol.removelem(_,val))
