N = int(input())

for i in range(N):
    a = input().split()
    a[0] = float(a[0])
    for j in range(len(a)):
        if a[j]=='@':
            a[0]*=3
        elif a[j]=='%':
            a[0]+=5
        elif a[j]=='#':
            a[0]-=7
    print('{:.2f}'.format(a[0]))