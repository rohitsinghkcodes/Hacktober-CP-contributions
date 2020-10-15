class solution:
    def removelem(self, num='', k=0):
        stack = []

        for digit in num:
            while len(stack) > 0 and stack[-1] > digit and k > 0:
                stack.pop()
                k -= 1

            stack.append(digit)

        while len(stack) > 0 and k > 0:
            stack.pop()
            k -= 1

        N = len(stack)

        if N == 0:
            return "0"

        leadingZeroIndex = 0

        while stack[leadingZeroIndex] == "0" and leadingZeroIndex + 1 < N:
            leadingZeroIndex += 1

        return "".join(stack[leadingZeroIndex:])

if __name__ == "__main__":
    sol = solution()
    _ = str(input())
    val = int(input())
    print(sol.removelem(_, val))
