#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
    @brief : get each alphabet count and save in vector
    @param : s(char *) : input stirng addr
    @return : alphabet_count_arr(int array)
*/
int *getAlphabetCount(char *s)
{
    int* alphabet_count_arr = (int*)calloc(53, sizeof(int));
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 65 && s[i] <= 90)
            alphabet_count_arr[s[i] - 64]++;
        else if (s[i] >= 97 && s[i] <= 122)
            alphabet_count_arr[s[i] - 70]++;
        else
            printf("[ERROR] Invalid input (only alphabet)\n");
    }

    return alphabet_count_arr;
}

/*
    @brief : check 2 string are anagram or not
    @param : s1,s2(const string)
    @return : 1 or 0
*/
int isAnagram(char *s1, char *s2)
{
    int *count_array1 = getAlphabetCount(s1);
    int *count_array2 = getAlphabetCount(s2);

    for(int i=1;i<=52;i++)
    {
        if(count_array1[i] != count_array2[i])
            return 0;
    }
    return 1;
}

int main()
{
    char input_string1[100], input_string2[100];
    scanf("%s", input_string1);
    scanf("%s", input_string2);

#ifdef DEBUG
    printf("[INFO] input1 : %s\n", input_string1);
    printf("[INFO] input2 : %s\n", input_string2);
    int *temp = getAlphabetCount("ABCZabcz");
    for (int i = 1; i <= 52; i++)
        printf("%d - %d\n", i, temp[i]);
#endif

    int result = isAnagram(input_string1, input_string2);
    if(result == 1)
        printf("YES");
    else
        printf("NO");

    return 0;
}