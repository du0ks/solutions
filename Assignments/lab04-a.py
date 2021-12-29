def leap_year(n):
    if (n%400 == 0):
        return True
    elif (n%100 == 0):
     return False
    elif (n%4 == 0):
     return True
    else:
     return False
a=int(input())
print(leap_year(a))
