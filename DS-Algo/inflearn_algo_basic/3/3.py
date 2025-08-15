N = int(input())

total = 0
print('1',end ='')  
for i in range(2,int(N/2)+1):
    if N % i ==0:
        print(f' + {i}',end = '')
        total+=i
print(f" = {total + 1}")
