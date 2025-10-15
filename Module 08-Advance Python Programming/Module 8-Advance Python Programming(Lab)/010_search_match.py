import re
s = "Python Language is widely use for web development and machine learning."

a = re.match(r"Python", s)
print(a)

b = re.search(r"Web", s)
print(b)