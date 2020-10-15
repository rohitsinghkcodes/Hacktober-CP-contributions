class solution:
    def removelem(self, nums=[]):
        if len(nums) == 1:
            return(len(nums))
        for i in range(len(nums)-1, -1 , -1):
            if nums[i] == nums[i-1]:
                nums.pop(i)

        return(len(nums),nums)

if __name__ == "__main__":
    sol = solution()
    _ = [int(n) for n in input().split()]
    print(sol.removelem(_))