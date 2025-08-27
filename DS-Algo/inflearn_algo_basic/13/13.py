input_string = input()

most_freq_digit = [0] * 10
for c in input_string:
    most_freq_digit[ord(c) - 48] += 1

max_cnt = max(most_freq_digit)
for i in range(9,0,-1):
    if most_freq_digit[i] == max_cnt:
        print(i)
        break
