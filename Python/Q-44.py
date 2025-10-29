n=int(input("Enter the size of array:"))
arr=[]
for i in range(n):
    a=int(input(f"Enter element {i+1}:"))
    arr.append(a)
Largest_element = max(arr)
print(f"Array: {arr}")
print(f"The Largest element is: {Largest_element}")