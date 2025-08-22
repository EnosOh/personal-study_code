#include <iostream>
#include <vector>
using namespace std;

/*
    @brief : Calculate the sum of each digit of a number n. (e.g., for 35, the sum is 3 + 5 = 8)
    @parm : n(int) -> input num
    @return : sum(int) -> sum of each digit
*/
int digit_sum(int n)
{
    int sum = 0;
    int temp_n = n;
    while (temp_n != 0)
    {
        sum += temp_n % 10;
        temp_n = temp_n / 10;
    }
    return sum;
}

int main()
{
    int N;
    cin >> N;

    int digit = 0, digit_s = 0;
    for (int i = 1; i <= N; i++)
    {
        int temp_input;
        cin >> temp_input;
        int temp = digit_sum(temp_input);
        if (temp > digit_s)
        {
            digit_s = temp;
            digit = temp_input;
        }
        else if (temp == digit_s)
        {
            if (temp_input > digit)
                digit = temp_input;
        }
    }
    cout << digit;

    return 0;
}