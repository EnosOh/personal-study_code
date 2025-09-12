import logging
logging.basicConfig(level=logging.WARNING, format='[%(levelname)s] %(message)s')

N = int(input().strip())

input_lst =list(map(int,input().split()))

max = input_lst[-1]
anger_cnt = 0
for e in reversed(input_lst):
    if max < e:
        logging.info(f"max : {max} | e : {e}")
        max = e
        anger_cnt+=1

print(anger_cnt)