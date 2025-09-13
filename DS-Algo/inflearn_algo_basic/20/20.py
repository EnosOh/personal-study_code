N = int(input().strip())
A = list(map(int, input().split()))
B = list(map(int, input().split()))

for a, b in zip(A, B):
    if a == b:
        print('D')
    elif (a == 1 and b == 3) or (a == 2 and b == 1) or (a == 3 and b == 2):
        print('A')
    else:
        print('B')
