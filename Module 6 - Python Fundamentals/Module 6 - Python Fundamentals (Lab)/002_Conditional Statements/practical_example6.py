number= int(input("Enter Value For Check It is Prime or Not : "))
flag=0

for i in range(2,number):
    if number % i == 0:
        flag = 1
        break

if flag ==1:
    print(number, "is not prime")
else :
    print(number, "is prime")