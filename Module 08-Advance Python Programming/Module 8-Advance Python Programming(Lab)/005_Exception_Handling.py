# 1. Write a Python program to handle exceptions in a simple calculator (division by zero, invalid input).
# 2. Write a Python program to demonstrate handling multiple exceptions.

def calculator():
    while True:
        try:
            num1 = float(input("Enter first number: "))
            num2 = float(input("Enter second number: "))
            operation = input("Enter operation (+, -, *, /): ")

            if operation == '+':
                result = num1 + num2
            elif operation == '-':
                result = num1 - num2
            elif operation == '*':
                result = num1 * num2
            elif operation == '/':
                if num2 == 0:
                    raise ZeroDivisionError("Cannot divide by zero.")
                result = num1 / num2
            else:
                raise ValueError("Invalid operation.")

            print("Result:", result)
            break

        except ValueError as ve:
            print("Error:", ve)
        except ZeroDivisionError as zde:
            print("Error:", zde)
        except Exception as e:
            print("An unexpected error occurred:", e)
# calculator()

# 3. Write a Python program to handle file exceptions and use the finally block for closing the file. 

def process_file(filename):
    file = None
    try:
        file = open(filename, 'r')
        contents = file.read()
        print("File contents:\n", contents)
    except FileNotFoundError:
        print("Error: File not found.")
    except IOError as e:
        print(f"Error reading file: {e}")
    finally:
        if file:
            file.close()
            print("File closed.")
# process_file("test.txt")


# 4. Write a Python program to print custom exceptions.
def divide_numbers(x, y):
    if y == 0:
        raise Exception("Cannot divide by zero!")
    return x / y
try:
    result = divide_numbers(10, 5)
except Exception as e:
    print(f"An error occurred: {e}")
else:
    print(f"The result is: {result}")
