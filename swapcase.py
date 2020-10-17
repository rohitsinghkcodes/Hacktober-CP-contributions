def swap_case(s):
    length = len(s)
    i=0
    while length:
        if s1[i].isupper():
            s[i].lower()
        elif s[i].islower():
            s[i].upper()
        length-=1
        i+=1
    return s

if __name__ == '__main__':
    s = input()
    result = swap_case(s)
    print(result)
