A_input_lst =list(map(int,input().split()))
B_input_lst =list(map(int,input().split()))

A_score = 0
B_score = 0
resent_winner = ''

for a,b in  zip(A_input_lst,B_input_lst):
    if a > b:
        A_score+=3
        resent_winner = 'A'
    elif b>a:
        B_score+=3
        resent_winner = 'B'
    else:
        A_score+=1
        B_score+=1

print(A_score, B_score)

winner = 'A' if A_score > B_score else ('B' if A_score < B_score else 'D')
print(winner)