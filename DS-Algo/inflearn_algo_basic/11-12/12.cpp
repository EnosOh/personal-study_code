#include <iostream>
#include <vector>
using namespace std;
// #define DEBUG

/*
    @brief : count total using digit from 1~n (e.g. n =3 1,2,3 return 3)
    @param : n(int) -> input num
    @return : cnt(int)
*/
int countAllDigit(int n)
{
    int temp_n = n;
    int ten = 1, mul = 1;
    int cnt=0;

    while (1)
    {
        if (temp_n / 10 != 0)
        {
            cnt += ((ten * 10) - ten) * mul;
            ten = ten * 10;
            mul++;
            temp_n /= 10;
        }
        else
        {
            cnt += ((n + 1) - ten) * mul;
            break;
        }
    }

    return cnt;
}

int main()
{
    int N;
    cin >> N;
    if (N < 3 && N > 100000)
    {
        printf("[ERROR] invalid input (3<=N<=100000000)");
        exit(-1);
    }

#ifdef DEBUG
    printf("[INFO] N = %d\n", N);
    printf("[INFO] countAllDigit of %d : %d\n", N, countAllDigit(N));
#endif

    cout << countAllDigit(N);

    return 0;
}