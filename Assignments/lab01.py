def sq(n):
	c=1.0
	while(c*c!=n):
		c+=1.0
	return c

A = float( input( "\nEnter the coefficient A: " ) )

while (A<=0):
	  A = float( input( "\nEnter number > 0: " ) )



B = float( input( "\nEnter the coefficient B: " ) )

C = float( input( "\nEnter the coefficient C: " ) )

print( "\nThe coefficients of the equation:\n" )
print( "  Coefficient A = ", A )
print( "  Coefficient B = ", B )
print( "  Coefficient C = ", C )


delta=(B**2)-(4*A*C)
root1 = -B+sq(delta)/2*A
root2 = -B-sq(delta)/2*A


print( "\nThe roots of the equation:\n" )
print( "  Root #1 = ", round(root1,3) ) 
print( "  Root #2 = ", round(root2,3) )


