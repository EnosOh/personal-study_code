import logging

logging.basicConfig(level=logging.INFO, format='[%(levelname)s] %(message)s')

N = int(input().strip())

for _ in range(N):
    temp_prob,temp_ans = map(int,input().split())
    student_ans = (1+temp_prob) * temp_prob // 2
    print('YES' if student_ans == temp_ans else 'NO')