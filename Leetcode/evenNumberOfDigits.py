class solution:
    def findNumbers(self, nums=[]):
        even = 0
        for num in nums:
            numString = str(num)
            if len(numString) % 2 == 0:
                even += 1
        return even
if __name__ == "__main__":
    sol = solution()
    _ = [int(n) for n in input().split()]
    print(sol.findNumbers(_))
