    x=list(map(int,input().split()))
    c=list(map(int,input().split()))
    count=0
    for i in range(x[0]):
        
        if c[i]>=c[x[1]-1]: 
            count+=1
            if c[i]==0: count-=1
    print(count)
