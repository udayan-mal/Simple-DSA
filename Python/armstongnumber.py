n=int(input())
a=n
b=n
c=0
s=0
while a!=0:
    r=a%10
    c+=1
    a=a//10
while b!=0:
    r=b%10
    s=s+(r**c)
    b=b//10
if s==n:
    print("Armstrong")
else:
    print("NOt Armstrong")
