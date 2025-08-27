#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;

// #define DEBUG

/*
    @brief : Convert char to number; throw if not a digit
    @param : c(char) -> input char
    @return : digit(int) -> char -> int result
*/
int charToInt(char c)
{
    if (!isdigit(c))
    {
        cout << "[ERROR] invalid input (only digit)" << endl;
        exit(-1);
    }

    int digit = c - '0';

    return digit;
}

/*
    @brief:  return the most frequently occurring digit in the given string.
    @param : s(string) -> input string
    @return : most_frequent(int) -> most frequently occurring digit
*/
int mostFrequentDigit(const string &s)
{
    vector<int> digit_cnt(10);
    for (char c : s)
        digit_cnt[charToInt(c)]++;

    int max_cnt = *max_element(digit_cnt.begin(), digit_cnt.end());
    
#ifdef DEBUG
    cout << "[INFO] max_cnt : " << max_cnt << endl;
#endif

    int most_frequent_num;
    for (int i = digit_cnt.size() - 1; i >= 1; i--)
    {
        if (max_cnt == digit_cnt[i])
        {
            most_frequent_num = i;
            break;
        }
    }

    return most_frequent_num;
}

int main()
{
    string input_string;
    getline(cin, input_string);

#ifdef DEBUG
    cout << input_string << endl;
    cout << "[INFO] charToint result (input 3) : " << charToInt('3') << endl;
    // cout << charToInt('A') << endl;
#endif

    cout << mostFrequentDigit(input_string) << endl;

    return 0;
}