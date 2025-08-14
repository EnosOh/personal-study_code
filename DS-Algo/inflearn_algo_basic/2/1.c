#include<stdio.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);

    int total=0, i=0;
    for(i = a; i<b;i++)
    {
        total += i;
        printf("%d + ",i);
    }
    printf("%d = %d",i,total+i);
    return 0;
}