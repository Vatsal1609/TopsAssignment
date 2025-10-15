# ===========================square a list of numbers=========================
def square(a):
    return a*a

l = [10,20,30,40,50,60]

k = map(square,l)
print(list(k))


#  =========================product of a list of numbers=========================
from functools import reduce
a = [10,20,3,40,5,60,87,1,5,26]

def sum(x,y):
    # print(x,y)
    return x+y

k = reduce(sum,a)
k = reduce(lambda x,y:x+y,a)
print(k)

# =========================filters out even numbers ==================================
import math
a = [1,2,5,6,7,9,4,11]

def checkeven(a):
    if a%2==0:
        return a
    
k = filter(checkeven,a)
k = filter(lambda num:num%2==0,a)
print(list(k))