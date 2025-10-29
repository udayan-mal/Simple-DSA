def reverse_str(s):
    if len(s) <= 1:
        return s
    else:
        return reverse_str(s[1:]) + s[0]

s= input("Enter any String: ")
r = reverse_str(s)
print(f"Your string: {s}")
print(f"reversed string: {r}")