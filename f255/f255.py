tb = [1,2]+[0 for i in range(9999)]
for i in range (1,10000):
    tb[i] = tb[i-1]*2
while True:
    n = int(input())
    if n == 0:
        break
    print(tb[n])