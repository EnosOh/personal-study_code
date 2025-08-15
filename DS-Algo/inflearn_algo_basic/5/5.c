#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isValidResidentNumber(const char *str)
{
    if (strlen(str) != 14)
        return 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (i == 6)
            continue;
        if (!(isdigit(*(str + i))))
            return 0;
    }
    return 1;
}

int main()
{
    char resident_number[16];
    fgets(resident_number,sizeof(resident_number), stdin);

    if (!(isValidResidentNumber(resident_number)))
    {
        printf("[Invalid input] input valid resident num");
        return -1;
    }

    int year = (resident_number[0] - '0') * 10 + (resident_number[1] - '0');
    int cen = (resident_number[7] == '1' || resident_number[7] == '2') ? 1900 : 2000;
    
    int age = 2019 - (year + cen) + 1;
    char gender = (resident_number[7] == '1' || resident_number[7] == '3') ? 'M' : 'W';

    printf("%d %c", age, gender);

    return 0;
}