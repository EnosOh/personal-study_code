#include<iostream>
#include<string>
using namespace std;

int main()
{
    string input_string;
    getline(cin,input_string);
    
    int total = 0;
    for(char c: input_string)
    {
        if(c == '(')
            total++;
        else if(c == ')')
            total--;
        if(total < 0)
            break;
    }
    
    if(total == 0)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}