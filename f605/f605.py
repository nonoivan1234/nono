n,d = map(int,input().split())
arr=[]
ans = 0
c=0
for i in range (n):
    arr.append(list(map(int,input().split())))
for i in arr:
    if max(i)-min(i)>=d:
        ans+=sum(i)/3
        c+=1
print(c,int(ans))