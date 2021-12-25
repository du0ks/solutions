a,b=input().split()
a=int(a)
b=int(b)
c=0
if (a==b): print (1)
else: 
    while (a<=b):
            a*=3
            b*=2
            c+=1
    print(c)
