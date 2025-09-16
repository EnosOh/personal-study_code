#include <iostream>
#include <vector>
using namespace std;

#define TOTAL_CARD_NUM 10

int main()
{
    vector<int> A_input_vector(TOTAL_CARD_NUM + 1);
    vector<int> B_input_vector(TOTAL_CARD_NUM + 1);

    for (int i = 1; i <= TOTAL_CARD_NUM; i++)
        cin >> A_input_vector[i];
    for (int i = 1; i <= TOTAL_CARD_NUM; i++)
        cin >> B_input_vector[i];

    int A_score = 0;
    int B_score = 0;
    char resent_winner = 'D';
    for (int i = 1; i <= TOTAL_CARD_NUM; i++)
    {
        if (A_input_vector[i] > B_input_vector[i])
        {
            A_score += 3;
            resent_winner = 'A';
        }
        else if (B_input_vector[i] > A_input_vector[i])
        {
            B_score += 3;
            resent_winner = 'B';
        }
        else
        {
            A_score++;
            B_score++;
        }
    }

    char winner;
    if (A_score > B_score)
        winner = 'A';
    else if (B_score > A_score)
        winner = 'B';
    else
        winner = resent_winner;
    cout << A_score << " " << B_score << endl;
    cout << winner;
    return 0;
}