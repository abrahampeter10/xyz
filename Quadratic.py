a=int(input("Enter first num: "))
b=int(input("Enter second num: "))
c=int(input("Enter third num: "))

temp=b**2-4*a*c
if(temp<0):
    print("No real solution")
elif(temp==0):
    result=-b/(2*a)
    print("Solution is: ",result)
else:
    res1=-b+(temp)/2*a
    res2=-b-(temp)/2*a
    print("Solutions are: ", res1," ",res2)
