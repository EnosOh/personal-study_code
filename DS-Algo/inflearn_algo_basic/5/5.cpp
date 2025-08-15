#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isValidResidentNumber(const string &str)
{
    if (str.length() != 14)
        return false;
    if (str[6] != '-')
        return false;
    for (int i = 0; i < str.length(); i++)
    {
        if (i == 6)
            continue;
        if (!isdigit(str[i]))
            return false;
    }
    if (!(str[7] != 1 || str[7] != 2 || str[7] != 3 || str[7] != 4))
        return false;

    return true;
}

int main()
{
    string resident_number;
    getline(cin, resident_number);
    
    if (!isValidResidentNumber(resident_number))
    {
        cout << "[InValid resident_number]";
        return -1;
    }

    int year = stoi(resident_number.substr(0, 2));
    char flag = resident_number[7];

    int centuty = 0;
    if (flag == '1' or flag == '2')
        centuty = 1900;
    else
        centuty = 2000;

    year = centuty + year;
    int age = 2019 - year + 1;

    char gender = (flag == '1' || flag == '3') ? 'M' : 'W';

    cout << age << ' ' << gender;

    return 0;
}
