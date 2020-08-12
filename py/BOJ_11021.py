N = int(input())

for i in range(N):
    a,b = input().split()
    a = int(a)
    b = int(b)
    result = a+b
    print("Case #%d: %d"%(i+1,result))