size=int(input("Enter the size of array:"))
array=[]
for i in range(size):
    n=int(input("Enter element:"))
    array.append(n)
Largest_element= max(array)
print(f"Array: {array}")
print(f"The Largest element in the array: {Largest_element}")