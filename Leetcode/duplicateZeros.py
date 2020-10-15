class solution:
    def duplicateZeros(self, arr=[]):
        leng = len(arr)
        zero = 0
        for left in range(leng):
            if left > leng - zero:
                break
            if arr[left] == 0:
                if left == leng - zero:
                    arr[left] = 0
                    leng -= 1
                    break
                zero += 1

        last = leng - zero - 1
        for i in range(last, -1, -1):
            if arr[i] == 0:
                arr[i + zero] = 0
                zero -= 1
                arr[i + zero] = 0
            else:
                arr[i + zero] = arr[i]
        return arr


if __name__ == "__main__":
    sol = solution()
    _ = [int(n) for n in input().split()]
    print(sol.duplicateZeros(_))
