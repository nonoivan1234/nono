a = input()
odd = 0
even = 0
for i in range (len(a)):
    n = i*(-1) - 1
    if(n*(-1) % 2==0):
        even += int(a[n])
    else :
        odd += int(a[n])

print(abs(odd-even))