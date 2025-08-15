def is_valid_resident_number(e : str) -> bool:
    if len(e) != 14:
        return False
    if e[6] != '-':
        return False
    if e[7] not in '1234':
        return False
    for i, ch in enumerate(e):
        if i ==6:
            continue
        if not ch.isdigit():
            return False
    return True

resident_number = input().strip()

if not is_valid_resident_number(resident_number):
    print("[Invalid input] need resident number")
    exit(-1)

year = int(resident_number[0:2])
flag = resident_number[7]
century = 1900 if flag in '12' else 2000
age = 2019 - (century + year) + 1
gender = 'M' if flag in '13' else 'W'

print(age,gender)
