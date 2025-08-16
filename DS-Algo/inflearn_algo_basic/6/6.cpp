#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main()
{
    string input_string;
    getline(cin,input_string);

    string digit_string;
    for (char c: input_string)
    {
        if(isdigit(c))
            digit_string+=c;
    }

    int number = 0;
    if(!digit_string.empty())
        number = stoi(digit_string);
    cout << number;

    int divisors_cnt = 0;
    for(int i = 1; i*i <=number; i++)
    {
        if(i*i == number)
            divisors_cnt++;
        else if (number % i == 0)
            divisors_cnt += 2;
    }   
    

    return 0;
}