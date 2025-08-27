#include <iostream>
#include <vector>

using namespace std;

/*
    @brief : reverse number  (e.g. 35 -> 53)
    @param : n(int) -> input num
    @return : reversed_num(int) -> reversed num
*/
int reverseNum(int n)
{
    int reversed_num = 0;
    int temp_n = n;
    while (temp_n)
    {
        reversed_num = reversed_num * 10 + temp_n % 10;
        temp_n = temp_n / 10;
    }

    return reversed_num;
}

/*
    @brief : Checks whether a given integer is a prime number
    @param : n(int) -> input num
    @return : true or false (bool)
*/
bool isPrime(int n)
{
    if (n == 1)
        return false;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

int main()
{
#ifdef DEBUG
    cout << "[INFO] reverseNum(350) : " << reverseNum(350) << endl;
    cout << "[INFO] isPrime(41) : " << isPrime(41) << endl;
    cout << "[INFO] isPrime(33) : " << isPrime(33) << endl;
#endif
    int N;
    cin >> N;
    vector<int> input_num_vector(N);
    int temp_input;
    for (int i = 0; i < N; i++)
    {
        cin >> temp_input;
        temp_input = reverseNum(temp_input);
        if(isPrime(temp_input) == true)
            cout << temp_input << " ";
    }

    return 0;
}