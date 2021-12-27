n=int(input())
a=[]
c=0
for i in range(n):
    ele=input()
    a.append(ele)
for j in range(n-1):
    if a[j]!=a[j+1]:
        c+=1        
print(c+1)
