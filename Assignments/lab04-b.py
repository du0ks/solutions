def rotate(s,n):
    if len(s)<2:
        return s
    else:
        a=s[len(s)-n::]
        m=a+s[:len(s)-n:]
        return m

    
a=input()
b=int(input())
print(rotate(a,b))
