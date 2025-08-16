#include <iostream>
#include <cctype>
#include <string>
using namespace std;

/*
    @brief : extract digit(0~9) in string and return new string
    @param : string pointer s -> input string
    @return : string digit_string -> new string that include digit
*/
string extractDigits(const string &s)
{
    string digit_string;
    for (char c : s)
    {
        if (isdigit(c))
            digit_string += c;
    }

    return digit_string;
}

/*
    @brief : string to int
    @param : strint pointer s -> input string
    @return : int number -> result digit(int)
*/
int stringToInt(const string &s)
{
    int number = 0;
    if (!s.empty())
        number = stoi(s);

    return number;
}

/*
    @brief : count input num divisors and return cnt result
    @param : int n -> input num
    @return : int cnt -> count of divisors
*/
int countDivisors(int n)
{
    int cnt = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (i * i == n)
            cnt++;
        else if (n % i == 0)
            cnt += 2;
    }

    return cnt;
}

int main()
{
    string input_string;
    getline(cin, input_string);

    string digit_string = extractDigits(input_string);

    int number = stringToInt(digit_string);
    cout << number << endl;

    cout << countDivisors(number);

    return 0;
}