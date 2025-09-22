import logging
logging.basicConfig(level=logging.INFO, format='[%(levelname)s] %(message)s')

N,K = map(int,input().split())
temperature_lst = list(map(int,input().split()))

logging.info(f" temperture_lst : {temperature_lst}")

total = sum(temperature_lst[:K])
logging.info(f'temp_k_total : {total}')
temp_k_total = total
for i in range(K,N):
    temp_k_total = temp_k_total + temperature_lst[i] - temperature_lst[i - K] 
    if total < temp_k_total:
       total = temp_k_total
    logging.info(f'temp_k_total : {temp_k_total}')

print(total)
    