#check leap year and number of days in month

def numOfMonth(y, m, leap = 0):
    M_31 = [1,3,5,7,8,10,12]  #months which have 31 days
    
    if y%400==0: #leap year and a century year
        leap = 1
    elif y%100 == 0:
        leap = 0
    elif y%4 == 0 and y%100 != 0: #leap year but not a century year
        leap = 1
    if m == 2:
        print("It's a leap year!")
        return 28+leap
    if m in M_31:
        return 31
    return 30

a = int(input("Enter year: "))

b = int(input("Number of month: "))

print("Number of days: ",numOfMonth(a,b))
   
