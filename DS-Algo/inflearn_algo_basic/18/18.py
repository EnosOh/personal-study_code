N,M = map(int,(input().split()))

noise_lst = list(map(int,input().split()))

max_consecutive_alrams = -1
temp_conseutive_alrams = 0
for e in noise_lst:
    if e > M:
        temp_conseutive_alrams+=1
    else:
        temp_conseutive_alrams = 0
    if max_consecutive_alrams < temp_conseutive_alrams:
        max_consecutive_alrams = temp_conseutive_alrams

print(max_consecutive_alrams)
