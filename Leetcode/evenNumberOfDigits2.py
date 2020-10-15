class solution:
    def findNumbers(self, nums=[]):
        foo = []
        for num in nums:
            digit = 0
            
            while num > 0:
                num = num//10
                digit += 1
            
            foo.append(digit)
        count = 0
        for i in foo:
            if i % 2 == 0:
                count+=1
        return foo

if __name__ == "__main__":
    sol = solution()
    _ = [int(n) for n in input().split()]
    print(sol.findNumbers(_))