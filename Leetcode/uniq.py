def doit(s):
    for char in s:
        if s.count(char) == 1:
            return(s.index(char))
    return -1


if __name__ == "__main__":
    s = str(input())
    print(doit(s))
