vowels="aeiuo"
while(True):
    n=""
    a=""
    s1=""
    b=0
    n=input()
    if n=="quit":
        break
    n=n.lower()
    if n[0] in vowels:
        n=n+"way"
    else:
        for i in range(len(n)):
            if n[i] in vowels:
                break
            else:
                a=a+n[i]
                b+=1
        s1=n[b:]
        n=s1+a+"ay"
    print(n)


                

