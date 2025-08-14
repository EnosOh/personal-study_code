N, M = map(int,input().split())

total = 0
for i in range(1,N+1):
   if i % M == 0:
      total += i

print(total)