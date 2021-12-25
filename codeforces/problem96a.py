    sit=input()
    count=0
    for i in range (len(sit)):
        if(i+1==len(sit)): 
            print("NO")
            break
        if (sit[i]==sit[i+1]):
            count+=1
        else:
            count=0
        if(count==6):
            print("YES")
            break
