a,b = input().split()
a = int(a)
b = int(b)
c = int(input())#0<=c<=1000

hour = c//60
minute = c%60

a+=hour
b+=minute

if b>=60:
    a+=1
    b%=60

if a>=24:
    a%=24

print(a,b)