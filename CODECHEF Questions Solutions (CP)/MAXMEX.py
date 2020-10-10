for _ in range(int(input())):
    (n,m) = list(map(int,input().split()))
    arr = list(map(int,input().split()))
    ar = list(set(arr))
    ar.sort()
    mex = 0
    ct = 0
    if ar[0]!=1:
        mex = 1 
    else:
        for i in range(len(ar)):
            if ar[i]!= i+1:
                mex = i + 1
                break
    if mex==0: mex = len(ar) + 1
    if mex==m:
        print(n)
    elif mex<m:
        print(-1)
    else:
        for i in range(n):
            if arr[i]==m:
                ct+= 1 
        print(n-ct)