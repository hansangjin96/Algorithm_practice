S = list(map(str,input()))

alpha = list('abcdefghijklmnopqrstuvwxyz')
answer = [-1 for i in range(len(alpha))]

for i in range(len(S)):
    if answer[alpha.index(S[i])] == -1:
        answer[alpha.index(S[i])] = i

print(*answer)