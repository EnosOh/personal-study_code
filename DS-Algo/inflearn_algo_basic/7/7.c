#include<stdio.h>
#include<string.h>

int main()
{
    char infectd_word[101];
    fgets(infectd_word,sizeof(infectd_word),stdin);
    infectd_word[strlen(infectd_word)]  = '\0';

    for(int i=0; infectd_word[i] != '\0'; i++)
    {
        if(infectd_word[i] != ' ')
        {
            if(infectd_word[i] >= 65 && infectd_word[i] <= 90)
                printf("%c",infectd_word[i]+32); 
            else 
                printf("%c",infectd_word[i]);
        }
    }

    return 0;
}