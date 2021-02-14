n = int(input())
word = []
command = []
word_=[]
for i in range (n):
    word.append(input())
for i in range (n):
    command.append(list(map(int,input().split())))
for i in range (n):
    c=''
    for j in range (0,command[i][0]-1):
        c+=word[i][j]
    for j in range (command[i][1]-1,command[i][0]-2,-1):
        c+=word[i][j]
    for j in range (command[i][1],len(word[i])):
        c+=word[i][j]
    word_.append(c)
print(" ".join(word_)+".")