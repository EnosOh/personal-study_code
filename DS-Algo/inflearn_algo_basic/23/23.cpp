#include <iostream>
#include <vector>

using namespace std;

/*
    @brief : longest increase sequence length
    @param : sequence_vector (const vector<int> &)
    @return : logest_length (int)
*/
int getLongestIncreaseLength(const vector<int> sequence_vector)
{
    int prev_val = sequence_vector[0];
    int longest_length = 0, temp_length = 0;
    for (int i = 1; i < sequence_vector.size(); i++)
    {
        if (sequence_vector[i] >= prev_val)
            temp_length++;
        else
        {
            if (temp_length > longest_length)
                longest_length = temp_length;
            temp_length = 1;
        }
        prev_val = sequence_vector[i];
    }
    return longest_length;
}

int main()
{
#ifdef DEBUG
    vector<int> temp_INFO_vector = {5, 7, 3, 3, 12, 12, 13, 10, 11};
    cout << "[INFO] getLongestIncreaseLength([5 7 3 3 12 12 13 10 11]) : " << getLongestIncreaseLength(temp_INFO_vector) << endl;
#endif
    int N;
    cin >> N;
    vector<int> sequence_input_vector(N, 0);
    for (int i = 0; i < N; i++)
        cin >> sequence_input_vector[i];
    cout << getLongestIncreaseLength(sequence_input_vector) << endl;
    return 0;
}