#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin >> N;
    if (N < 2 || N > 100)
    {
        printf("[Invalid input] please input 2 <= N <= 100");
        return -1;
    }

    return 0;
}