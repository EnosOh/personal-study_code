#include<iostream>
#include<vector>
using namespace std;
#define DEBUG

int main()
{
    int N;
    cin >> N;
    if(N < 3 && N > 100000)
    {
        printf("[ERROR] invalid input (3<=N<=100000)");
        exit(-1);
    }

    #ifdef DEBUG
    printf("[LOG] N = %d\n",N);
    #endif

    return 0;
}