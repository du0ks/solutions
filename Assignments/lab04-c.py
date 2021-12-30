def digit_count(n):
    evens=0
    odds=0
    zeros=0
    u=str(n)
    i=1
    if (n<1):
        odds,evens,zeros=0,0,0
    else:
     while(i<=len(u)):
            if n%(10*i)%2==0:
                if n%(10*i)==0:
                    print(n%(10*i))
                    zeros+=1
                else:
                    evens+=1
            else:
                odds+=1
            n=n//10
            i+=1
    return evens,odds,zeros
c=float(input())
print(digit_count(int(c)))
