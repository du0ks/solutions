a=int(input())
maxcap=0
cap=0
temp=0
for i in range(a):
    ex,en=input().split()
    ex=int(ex)
    en=int(en)
    cap=(cap-ex)+en
    if cap>maxcap:
        maxcap=cap
    
print(maxcap)
