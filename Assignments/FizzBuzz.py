#Duhan Onat Karadayı
for i in range (1,101):
    if(i%3==0 and i%5!=0): 
        print("Fizz")
        i+=1
    elif(i%5==0 and i%3!=0): 
        print("Buzz")
        i+=1
    elif(i%3==0 and i%5==0): 
        print("FizzBuzz")
        i+=1
    else: print(i)
