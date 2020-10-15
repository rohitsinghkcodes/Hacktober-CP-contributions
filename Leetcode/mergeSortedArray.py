class solution:
    def merge(self, nums1=[], m=0, nums2=[], n=0) -> None:

        for i in range(len(nums1) - 1, -1, -1):
            if i > m - 1:
                nums1.pop(i)

        for i in range(len(nums2) - 1, -1, -1):
            if i > n - 1:
                nums2.pop(i)

        for num in nums2:
            nums1.append(num)
        return(sorted(nums1))


if __name__ == "__main__":
    sol = solution()
    _ = [int(n) for n in input().split()]
    _2 = [int(n) for n in input().split()]
    m = int(input())
    n = int(input())
    print(sol.merge(_, m, _2, n))
