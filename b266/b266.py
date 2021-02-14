r,c,m = map(int,input().split())
ans = []
for i in range (r):
    ans.append(input().split())
move = list(map(int,input().split()))
for i in range (len(move)-1,-1,-1):
    ans_copy = []
    if move[i]==1:
        for j in range (r-1,-1,-1):
            ans_copy.append(ans[j])
        ans = ans_copy
    elif move[i]==0:
        for k in range (c-1,-1,-1):
            ans_to_join=''
            for j in range (r):
                ans_to_join+=ans[j][k]
            a = []
            for j in ans_to_join:
                a.append(j)
            ans_copy.append(a)
        ans = ans_copy
        r,c = c,r

print(r,c)
for i in ans:
    print(*i)