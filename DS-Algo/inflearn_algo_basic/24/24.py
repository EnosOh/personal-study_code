N = int(input())    

lst = list(map(int,input().split()))

jolly_check_lst=[0] * N

prev_e = lst[0]
flag = 0
for e in lst[1:]:
    temp = abs(prev_e - e)
    if(temp >= N or temp == 0 or jolly_check_lst[temp] != 0):
        flag = 1
        break
    jolly_check_lst[temp] +=1
    prev_e = e
    
print('YES')