def reverse_string(s):
    if len(s) <= 1:
        return s
    else:
        return reverse_string(s[1:]) + s[0]

original= input("Enter a String: ")
reverse = reverse_string(original)
print(f"The original string is: {original}")
print(f"The reversed string is: {reverse}")