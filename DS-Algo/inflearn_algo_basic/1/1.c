#include<stdio.h>
int main()
{
    int N,M;
    scanf("%d %d",&N,&M);

    int total =0;
    for(int i=1; i<=N; i++)
    {
       if(i%M==0)
        total+=i;
    }
    printf("%d",total);
    return 0;
}