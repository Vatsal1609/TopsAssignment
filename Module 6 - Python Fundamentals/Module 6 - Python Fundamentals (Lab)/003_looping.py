# practice_example1=========================

list1 = ["Apple","Banana","Mango"]
for i in list1:
    print(i)

# practice_example2========================

list2 =[]
for i in list1:
    list2.append(len(i))

print(list2)

# practice_example3=========================

for j in list1:
    if j=="Banana":
        print(j)


# practice_example4============================

# *
# **
# ***
# ****
# *****

for i in range(1,6):
    print("*"*i,end="")
    print()