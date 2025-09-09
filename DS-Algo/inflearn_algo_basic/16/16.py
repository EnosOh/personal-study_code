import logging
logging.basicConfig(level=logging.INFO, format='[%(levelname)s] %(message)s')

input_string1 = list(input())
input_string2 = list(input())

logging.info(f"input1 : {"".join(input_string1)}")
logging.info(f"input2 : {"".join(input_string2)}")

dict1 = {}
for char in input_string1:
    dict1[char] = dict1.get(char, 0) + 1

dict2 = {}
for char in input_string2:
    dict2[char] = dict2.get(char, 0) + 1

if dict1 == dict2:
    print("YES")
else:
    print("NO")
