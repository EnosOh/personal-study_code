#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
    @brief : make char to int if it is invalid char print error message
    @param : c(char) -> input(char)
    @return : digit(int)
*/
int charToInt(char c)
{
    int digit;
    if (c >= 48 && c <= 57)
        digit = c - '0';
    else
    {
        printf("[ERROR] %c is Invalid  (input must be digit only)\n",c);
        exit(-1);
    }

    return digit;
}

/*
    @brief : find most frequent digit in input string
    @param : s(*char) -> input string
    @return : most_frequent_digit(int)
*/
int getMostFrequentDigit(const char *s)
{
    int digit_freq_cnt[10] = {0,};
    for (int i = 0; s[i] != '\0'; i++)
        digit_freq_cnt[charToInt(s[i])]++;

#ifdef DEBUG
    printf("digit_freq_cnt result \n");
    for(int i=1;i<=9;i++)
        printf("(%d) : %d\n",i,digit_freq_cnt[i]);
#endif

    int max = digit_freq_cnt[9];
    int most_freq_num = 9;
    for (int i = 9; i >= 1; i--)
    {
        if (max < digit_freq_cnt[i])
        {
            max = digit_freq_cnt[i];
            most_freq_num = i;
        }
    }

    return most_freq_num;
}

int main()
{
    char input_string[101];
    fgets(input_string, sizeof(input_string), stdin);
    input_string[strlen(input_string)-1] = '\0';

#ifdef DEBUG
    printf("strlen of input string : %ld\n",strlen(input_string));
    printf("charToInt test (input : 3) -> %d\n", charToInt('3'));
#endif

    int most_freq_num = getMostFrequentDigit(input_string);
    printf("%d\n", most_freq_num);
    return 0;
}