#include <stdio.h>
#include <string.h>

int main()
{
    char input_string[32];
    fgets(input_string, sizeof(input_string), stdin);
    input_string[strlen(input_string)] = '\0';

    int total = 0;
    for (int i = 0; input_string[i] != '\0'; i++)
    {
        if (input_string[i] == '(')
            total++;
        else if (input_string[i] == ')')
            total--;
        if (total < 0)
            break;
    }

    if (total == 0)
        printf("YES");
    else
        printf("NO");

    return 0;
}