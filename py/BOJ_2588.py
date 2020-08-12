a = int(input())
b = input()
ans = [0 for _ in range(4)]
for i in range(3):
    ans[i] = a*int(b[2-i])
    print(ans[i])
ans[3] = a*int(b)
print(ans[3])