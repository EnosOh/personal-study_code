#include<stdio.h>
#include<string.h>

int main()
{
    char input_string[51];
    fgets(input_string, sizeof(input_string), stdin);
    input_string[strlen(input_string)] = '\0';

    int total_num = 0;
    for (int i = 0; input_string[i] != '\0'; i++)
    {
        if (input_string[i] >= 48 && input_string[i] <= 57)
            total_num = total_num * 10 + (input_string[i] - '0');
    }
    printf("%d\n",total_num);

    int divisors_cnt= 0;   
    for(int i=1; i*i <=total_num;i++)
    {
        if(i*i == total_num)
            divisors_cnt++;
        else if(total_num % i == 0)
            divisors_cnt+=2;
    }
    printf("%d",divisors_cnt);

    return 0;
}