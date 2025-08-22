import logging

logging.basicConfig(level=logging.INFO, format='[%(levelname)s] %(message)s')

def digit_sum(n : int) -> int:
    '''
        Calculate sum of each digit and return

        Args:
            n(int) -> input number 
        Returns:
            digit_s(int) -> sum of n's each digit
    '''
    temp_n = n
    digit_s = 0
    while temp_n > 0 :
        digit_s += temp_n % 10
        temp_n = int(temp_n / 10) 
    
    return digit_s

input_number = int(input())

digit = 0
each_digit_sum = 0
temp_input = list(map(int,input().split()))

logging.debug(f'temp_input : {temp_input}')
logging.debug(f'digit_sum -> test result : {digit_sum(temp_input[0])}')

for i in range(0,input_number):
    temp_each_digit_sum = digit_sum(temp_input[i])

    if temp_each_digit_sum > each_digit_sum:
        each_digit_sum = temp_each_digit_sum
        digit = temp_input[i]
    elif each_digit_sum == temp_each_digit_sum:
        if temp_input[i] > digit:
            digit = temp_input[i]

print(digit)