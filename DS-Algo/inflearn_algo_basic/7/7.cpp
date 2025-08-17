#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main()
{
    string infected_word;
    getline(cin,infected_word);

    string collected_word;
    for(char c : infected_word)
    {
        if(!isspace(c))
            collected_word += tolower(c);
    }
    cout << collected_word;

    return 0;
}