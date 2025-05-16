# Write a Python program to create a function that takes a string as input and prints it.
def hello():
    a = input("Enter String : ")
    print(a)

hello()
# Write a Python program to create a calculator using functions.

def add(n1, n2):
    return n1 + n2
def sub(n1, n2):
    return n1 - n2
def mul(n1, n2):
    return n1 * n2
def div(n1, n2):
    return n1 / n2

n1=10
n2= 5
print(n1, "+", n2, "=", add(n1, n2))
print(n1, "-", n2, "=", sub(n1, n2))
print(n1, "*", n2, "=", mul(n1, n2))
print(n1, "/", n2, "=", div(n1, n2))

# Write a Python program to create a parameterized function that takes two arguments and prints their sum. 
def addition(a,b):
    return a+b
a=5
b=10

print("Sum" "=" ,addition(a,b))
# Write a Python program to create a lambda function with one expression. 

square = lambda x: x**2
print(square(5))

# Write a Python program to create a lambda function with two expressions.

check_even_odd = lambda x: "Even" if x % 2 == 0 else "Odd"
print(check_even_odd(7))
print(check_even_odd(4))