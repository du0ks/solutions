p,s=input().split()
order=list(input())
p=int(p)
s=int(s)
j=0
str1=""
for i in range(s):
    j=0
    while(j<p-1):
        if ord(order[j])<ord(order[j+1]):
            order[j],order[j+1]=order[j+1],order[j]
            j+=1
        j+=1
for ele in order: 
        str1 += ele 
print(str1)
