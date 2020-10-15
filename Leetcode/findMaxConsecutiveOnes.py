class solution:
    def findMaxConsecutiveOnes(self, nums=[]):
        if len(nums) < 2:
            return(nums.count(1))

        if len(nums) > 2:
            cnt = []
            start = 0
            while start < len(nums):
                if nums[start] == 1:
                    count = 0
                    for end in range(start, len(nums)):
                        if nums[end] == 1:
                            count += 1
                            start = end
                        else:
                            break
                    cnt.append(count)
                start += 1 
            return (max(cnt))

if __name__ == "__main__":
    sol = solution()
    _ = [int(n) for n in input().split()]
    print(sol.findMaxConsecutiveOnes(_))
