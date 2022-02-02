#check leap year

x = int(input('Enter a year:'))

if x%400 == 0:                          #this condition checks if its a century year and a leap year
    print("leap year")
    
elif x%4 == 0 and x%100!= 0:            #checks if it is a leap year and not a century year
    print("leap year")
    
else:
    print("not a leap year")
