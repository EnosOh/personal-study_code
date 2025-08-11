a,b = map(int,input().split())

total = 0
for i in range(a,b):
    total += i
    print(f"{i} + ",end = '')

print(f"{b} = {total+b}")
    