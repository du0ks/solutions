m=int(input())
m+=1
while (True):
    a=m//1000
    b=m//100%10
    c=m//10%10
    d=m%10
    if a!=b and a!=c and a!=d and b!=c and b!=d and c!=d:
        break
    else: m+=1
print(m)
