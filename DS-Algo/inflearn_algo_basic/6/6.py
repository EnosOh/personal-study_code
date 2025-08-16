import math

def extract_digit_Instring(s :str) -> str:
    '''
        extract digit in string and return strint that only contain digit(Char)

        Args:
            s (str) -> original string (extract number from here)
        
        Returns:
            digit_str (str) -> new string with only extracted numbers 
    '''
    return "".join(c for c in s if c.isdigit())

def count_divisors(n :int) -> int:
    '''
        count divisors from input num and return divisors count

        Args:
            n (int) 
        
        Retruns:
            divisors_cnt (int)
    '''
    divisors_cnt = 0
    for i in range(1,int(math.sqrt(n))+1):
        if i*i == n:
            divisors_cnt+=1
        elif n%i ==0:
            divisors_cnt+=2
    
    return divisors_cnt

input_string = input()
num = int(extract_digit_Instring(input_string))
divisors_cnt = count_divisors(num)

print(num)
print(divisors_cnt,end = '')
