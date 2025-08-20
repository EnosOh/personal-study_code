#include <iostream>
#include <cmath>    
using namespace std;

int getDivisorCount(int num)
{
    int sqrt_num = int(sqrt(num));
    int cnt = 0;
    for(int i=1; i<=sqrt_num;i++)
    {
        if(num % i ==0)
        {
            if(i*i == num)
                cnt++;
            else
                cnt+=2;
        }
    }
    return cnt;
}

int main()
{
    int input_num;
    cin >> input_num;

    for (int i = 1; i <= input_num; i++)
        cout << getDivisorCount(i) << ' ';

    return 0;
}