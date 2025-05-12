marks = int(input("Enter Percentage :"))

if marks>=90 and marks<=100:
    print("A grade")
elif marks>=70 and marks<90 :
    print("B grade")
elif marks>=50 and marks<70 :
    print("C grade")
elif marks>=35 and marks<50 :
    print("D grade")
elif marks>=0 and marks<35 :
    print("Fail")
else:
    print("Wrong Percentage")