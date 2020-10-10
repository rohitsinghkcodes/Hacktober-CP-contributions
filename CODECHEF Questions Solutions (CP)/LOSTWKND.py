from functools import reduce
max_sum=24*5
for _ in range(int(input())):
    sum1=0
    arr=list(map(int,input().split(" ")))
    productive=arr.pop()
    sum1=reduce(lambda x,y:(x+y),arr)
    if(sum1*productive<=max_sum):
        print("No")
    else:
        print("Yes")
