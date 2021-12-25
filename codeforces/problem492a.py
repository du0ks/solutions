    cubes=int(input())
    last=0
    current=0
    i=0
    if cubes==1: print("1")
    else:
     
        while cubes>0:
            i+=1
            current=last+i
            last=current
            cubes-=current
            if cubes<0: i-=1
           # print(current,last,i,cubes)
            
     
        print(i)
