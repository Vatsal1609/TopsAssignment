# ===============================string slicing=============================
s = "Hello, Python!"
print(s[0:5])


# Write a Python program that manipulates and prints strings using various string methods.
words = "Sun rises In East"

print(len(words))
print(words.lower())
print(words.upper())
print(words.capitalize())
print(words.title())
print(words.strip())
print(words.replace("s","k",2))
print(words.find("In"))
print(words.startswith("Su"))
print(words.endswith("t"))
print(words.split(" "))
print(words.join("Hello"))
print("words".isalpha())
print("123".isdigit())

print("Hello".zfill(10))

print(words.center(50,'*'))
print(words.ljust(50,'*'))