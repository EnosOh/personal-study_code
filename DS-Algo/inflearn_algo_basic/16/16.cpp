#include <iostream>
#include <vector>
#include <string>

using namespace std;

/*
    @brief : get each alpabet count and save in vector
    @param : s(const string) : input stirng
    @return : alpabet_count_vector(vector)
*/
vector<int> getAlphabetCount(const string &s)
{
    vector<int> alpabet_count_vector(53, 0);
    for (char c : s)
    {
        if (c <= 90 && c >= 65)
            alpabet_count_vector[c - 64]++;
        else if ((c <= 122 && c >= 97))
            alpabet_count_vector[c - 70]++;
        else
            cout << "[ERROR] Invald input (only alphabet)" << endl;
    }

    return alpabet_count_vector;
}

/*
    @brief : check 2 string are anagram or not
    @param : s1,s2(const string)
    @return : true or false
*/
bool isAnagram(const string &s1, const string &s2)
{
    vector<int> alphabet_count1_vector = getAlphabetCount(s1);
    vector<int> alphabet_count2_vector = getAlphabetCount(s2);

    for (int i = 1; i < alphabet_count1_vector.size(); i++)
    {
        if (alphabet_count1_vector[i] != alphabet_count2_vector[i])
            return false;
    }
    return true;
}

int main()
{
    string input_string1, input_string2;
    getline(cin, input_string1);
    getline(cin, input_string2);

#ifdef DEBUG
    cout << "[INFO] input_string : " << input_string1 << endl;
    vector<int> temp_vector = getAlphabetCount(input_string1);
    for (int i = 1; i < temp_vector.capacity(); i++)
        cout << "[INFO] getAlpabetCount(ABCabc) : " << i << " - "<< temp_vector[i] << endl;
    
    temp_vector = getAlphabetCount(input_string2);
    for (int i = 1; i < temp_vector.capacity(); i++)
        cout << "[INFO] getAlpabetCount(ABCabc) : " << i << " - "<< temp_vector[i] << endl;
#endif

    bool result = isAnagram(input_string1, input_string2);
    if (result == true)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}