#include <iostream>
#include <vector>
using namespace std;
// #define DEBUG

/*
    @brief : count total using digit from n (e.g. 1234 -> 4)
    @param : n(int) -> input num
    @return : cnt(int)
*/
int countDigit(int n)
{
    int temp_n = n;
    int cnt = 0;
    while (temp_n > 0)
    {
        temp_n = temp_n / 10;
        cnt++;
    }

    return cnt;
}

int main()
{
    int N;
    cin >> N;
    if (N < 3 && N > 100000)
    {
        printf("[ERROR] invalid input (3<=N<=100000)");
        exit(-1);
    }

#ifdef DEBUG
    printf("[LOG] N = %d\n", N);
    printf("[LOG] countDigit of %d -> %d \n", N, countDigit(N));
#endif

    int total_cnt = 0;
    for (int i = 1; i <= N; i++)
        total_cnt += countDigit(i);
    printf("%d", total_cnt);

    return 0;
}