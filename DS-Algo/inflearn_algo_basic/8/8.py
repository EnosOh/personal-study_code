input_string = input()

total = 0
for c in input_string:
    if c =='(' :
        total+=1
    elif c==')' :
        total-=1
    if total < 0:
        break

if total == 0:
    print("YES")
else: print('NO')
        