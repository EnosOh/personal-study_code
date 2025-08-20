input_num = int(input())

each_divisor_count_list = [0] * (input_num+1)
for i in range(1,input_num+1):
    for j in range(i,input_num+1,i):
        each_divisor_count_list[j]+=1

print(*each_divisor_count_list[1:])