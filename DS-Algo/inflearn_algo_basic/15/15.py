import logging
logging.basicConfig(level=logging.ERROR, format='[%(levelname)s] %(message)s')

def count_primenumber(n :int):
    '''
        count prime number in 1 ~ n (20 -> 8)

        Args:
            n(int)
        Return:
            primenumber_cnt(int)
    '''
    check_prime_lst = [1] * (n+1)
    logging.info(f'{check_prime_lst[0]} / {check_prime_lst[1]}')
    for i in range(2,int((n**(1/2)))+1):
        if check_prime_lst[i] == 0: 
            continue
        else:
            for j in range (i*i,n+1,i):
                check_prime_lst[j] = 0
    
    return sum(check_prime_lst)-2

N = int(input())

primenumber_cnt = count_primenumber(N)
print(primenumber_cnt)
    
