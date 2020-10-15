class Solution:
    def thirdMax(self, nums: List[int]) -> int:
        if len(nums) < 3:
            return max(nums)
        foo = sorted(set(nums),reverse=True)
        if len(foo) < 3:
            return max(foo)
        return foo[2]

def stringToIntegerList(input):
    return json.loads(input)

def main():
    import sys
    import io
    def readlines():
        for line in io.TextIOWrapper(sys.stdin.buffer, encoding='utf-8'):
            yield line.strip('\n')

    lines = readlines()
    while True:
        try:
            line = next(lines)
            nums = stringToIntegerList(line);
            
            ret = Solution().thirdMax(nums)

            out = str(ret);
            print(out)
        except StopIteration:
            break

if __name__ == '__main__':
    main()