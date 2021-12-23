
positive_int_count=0 
odd_sum=0
even_sum=0
odd_count=0
even_count=0
a=1
while (True):
	n = int(input("Input an integer (0 terminates): "))
	if n==0: break
	if n>0:
		if n%2!=0: 
			odd_sum=odd_sum+n
			odd_count+=1
		else: 
			even_sum=even_sum+n
			even_count+=1
		positive_int_count+=1
	else: print("This is negative!")	
	

print( )
print(a)
print("sum of odds:", odd_sum)
print("sum of evens:", even_sum)
print("odd count:", odd_count)
print("even count:", even_count)
print("total positive int count:", positive_int_count)
