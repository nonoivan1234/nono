n,l = map(int,input().split())
stick=[[i for i in range (l+1)]]
mission = []
for i in range (n):
    mission.append(list(map(int,input().split())))
mission.sort(key = lambda d :d [1])
ans = 0
for i in mission:
    for j in stick:
        if i[0] in j:
            ind = stick.index(j)
            ind_end = j.index(i[0])
            stick.insert(ind,j[:ind_end])
            stick[ind+1]=j[ind_end:]
            if j[-1]==l:
                ans+=len(j)-1
            else:
                ans += len(j)
            break
print(ans)