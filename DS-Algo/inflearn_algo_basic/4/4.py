N = int(input())

age_lst = list(map(int,(input().split()))) 

print(max(age_lst)-min(age_lst))