n, a = input().split()
n=int(n)
a=int(a)
for i in range(a):
    if n%10!=0:
        n-=1
    else:
        n/=10

print(int(n))
