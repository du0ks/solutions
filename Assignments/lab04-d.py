def float_check(n):
    count=0
    a=True
    for i in range(len(n)):
        if n[i]==".":
            count+=1
    if n.isdigit()==True:
        a=True
    if count==1 and a==True: return True
    else: return False       

b=input()
print(float_check(b))
