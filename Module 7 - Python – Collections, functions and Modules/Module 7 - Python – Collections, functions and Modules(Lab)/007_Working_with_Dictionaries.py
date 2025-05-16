d = {
    "Name" : "Vatsal",
    "email":"vatsal@gmail.com",
    "phone":"8574524152",
    "Address":"Surat",
    "State":"Gujarat",
    "Student ID":"001",
}

d = {
    "Age" : 21,
    "course":"Python",
}

# Write a Python program to update a value in a dictionary.
d.update({"Address":"Ahemdabad"})
print(d)

# Write a Python program to merge two lists into one dictionary using a loop.
merged_dict = {}
list1 = ['a', 'b', 'c']
list2 = [1, 2, 3]
for i in range(len(list1)):
    merged_dict[list1[i]] = list2[i]

print(merged_dict)
    

# Write a Python program to separate keys and values from a dictionary using keys() and values() methods.
print(d.keys())
print(d.values())

# Write a Python program to count how many times each character appears in a string.
def count_characters(input_string):
    char_counts = {}
    for char in input_string:
        char_counts[char] = char_counts.get(char, 0) + 1
    return char_counts

text = "hello world"
result = count_characters(text)
print(result)
