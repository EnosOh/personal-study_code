#include<stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int total= 0;
    printf("1");
    for(int i=2;i<=N/2;i++)
    {
        if(N%i == 0)
        {
            total += i;
            printf(" + %d",i);
        }
    }
    printf(" = %d",total+1);
    
    return 0;
}