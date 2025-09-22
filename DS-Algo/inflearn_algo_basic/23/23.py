N = int(input())
input_sequence_lst = list(map(int,input().split()))

longest_sequence_len = 0
temp_longest_len=0
for i in range(1,len(input_sequence_lst)):
    if input_sequence_lst[i] >= input_sequence_lst[i-1]:
        temp_longest_len+=1
    else:
        if(temp_longest_len > longest_sequence_len):
            longest_sequence_len = temp_longest_len
        temp_longest_len = 1
print(longest_sequence_len)
        