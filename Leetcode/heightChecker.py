class Solution:

    def heightChecker(self, heights=[]):
        count = 0
        arr = sorted(heights)
        for i in range(len(heights)):
            if arr[i] != heights[i]:
                count += 1
        return count


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
            heights = stringToIntegerList(line)

            ret = Solution().heightChecker(heights)

            out = str(ret)
            print(out)
        except StopIteration:
            break


if __name__ == '__main__':
    main()
