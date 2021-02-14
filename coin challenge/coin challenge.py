n,m = map(int,input().split())
coin_list = list(map(int,input().split()))
dp=[1]+[0]*n
for j in coin_list:
    for i in range (j,n+1):
        dp[i]+=dp[i-j]
print(dp[n])