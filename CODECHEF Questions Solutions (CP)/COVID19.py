import math
for _ in range(int(input())):
    length=int(input())
    arr=list(map(int,input().split(" ")))
    count=1
    previous_element=arr[0]
    max_spread=0
    min_spread=length
    min_array=[]
    for index in range(1,len(arr)):
        current_element=arr[index]
        # previous_count=count
        if(current_element-previous_element<=2):
            count+=1
        else:
            min_spread=min(min_spread,count)
            max_spread=max(max_spread,count)
            count=1
        previous_element=current_element

    min_spread=min(min_spread,count)
    max_spread=max(max_spread,count)
    print("{} {}".format(min_spread,max_spread))