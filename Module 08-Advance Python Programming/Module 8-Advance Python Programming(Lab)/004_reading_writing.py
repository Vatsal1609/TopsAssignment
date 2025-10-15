# Write a Python program to read the contents of a file and print them on the console.

f = open("test.txt",'r')
data = f.read()
print(data)
f.close()

# Write a Python program to write multiple strings into a file.
f = open("test.txt",'w')
f.write("\nHello Pyhton")
f.write("\nHello Java")
f.write("\nHello PHP")
f.close()

# Write a Python program to check the current position of the file cursor using tell().
with open("test.txt",'r') as f:
    f.seek(15)
    print(f.tell())
    data = f.read()
    print(data)
    print(f.tell())