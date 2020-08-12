arr = input().split(' ')
a = int(arr[0])
b = int(arr[1])

ans = [0 for _ in range(5)]

ans[0] = a+b
ans[1] = a-b
ans[2] = a*b
ans[3] = int(a/b)
ans[4] = a%b

for i in ans:
    print(i)