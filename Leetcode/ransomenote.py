class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        ransom = list(ransomNote)
        mag = list(magazine)
        lenran = len(ransom)
        for i in range(lenran - 1, -1, -1):
            for j in range(len(mag) - 1, -1, -1):
                if ransom[i] == mag[j]:
                    mag.remove(ransom[i])
                    ransom.pop(i)
                    break
        if len(ransom) == 0:
            return True
        else:
            return False
        print(mag, ransom)

if __name__ == "__main__":
    sol = Solution()
    a = str(input())
    b = str(input())
    print(sol.canConstruct(a, b))
