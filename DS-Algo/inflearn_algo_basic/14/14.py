import logging
logging.basicConfig(level=logging.INFO, format='[%(levelname)s] %(message)s')

def reverse_num(n):
    '''
        reverse input n
        
        Args : 
            n(int) 
        Return :
            reversed_num(int)
    '''
    temp_n = n
    reversed_num = 0
    while temp_n > 0:
        reversed_num = temp_n % 10 + reversed_num * 10
        temp_n //= 10
    
    return reversed_num

def is_prime(n):
    ''' 
        check n is prime true of false 

        Args:
            n(int)
        Return :
            True of False
    '''
    if(n == 1) : return False
    end = int(n ** 0.5)
    for i in range(2,end+1):
        if n % i == 0:
            return False
        
    return True

N = int(input())
input_num_lst = list(map(int,input().split()))

logging.info(f'input_num_lst : {input_num_lst}')
logging.info(f'revers_num(350) : {reverse_num(350)}')
logging.info(f'is_prime(40) : {is_prime(40)}')

for value in input_num_lst:
    reversed_num = reverse_num(value)
    if is_prime(reversed_num) == True:
        print(reversed_num,end=' ')
