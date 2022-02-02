#calculate roots of quadratic equation 

a = int(input("Enter value of a(a!=0): "))
b = int(input("Enter value of b: "))
c = int(input("Enter value of c: "))

#discriminant

d = (b**2)-(4*a*c)

sol1 = (-b-(d)**0.5)/(2*a)   #alternate method to calculate discriminant is by using the 'cmath' library and using "sqrt" functions. 
sol2 = (-b+(d)**0.5)/(2*a)
roots = [sol1, sol2]

print(f"Roots of equation {a}x^2 + {b}x +{c} are: ")

if d>0:
    print("real and distinct roots")
    print(f"1st root:{roots[0]} and 2nd root: {roots[1]}")
    
elif d == 0:
    print("real and eqaul")
    print(f"1st root:{roots[0]} and 2nd root: {roots[1]}")
    
elif d<0:
    print("complex and distinct")
    print(f"1st root:{roots[0]} and 2nd root: {roots[1]}")
else:
    print('BuzzOFF!')
