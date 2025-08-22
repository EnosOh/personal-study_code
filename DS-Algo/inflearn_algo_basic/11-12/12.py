import logging

logging.basicConfig(level=logging.WARNING, format='[%(levelname)s] %(message)s')

def count_all_digit(n : int):
    '''
        cout all digit 1~n (e.g. input : 3 -> 1,2,3 return 3)

        Args:
            n(int) 
        Returns:
            cnt(int)
    '''
    cnt = 0
    mul = 1
    digit_cnt = 9
    digit_sum = 0

    while(digit_sum + digit_cnt < n):
        cnt += digit_cnt * mul
        digit_sum += digit_cnt
        mul += 1
        digit_cnt*=10
    
    cnt += (n-digit_sum) * mul
    return cnt

N = int(input())

logging.info(f'input N : {N}')

print(count_all_digit(N))