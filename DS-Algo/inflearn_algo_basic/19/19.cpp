#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> input_vector(N + 1, 0);
    for (int i = 1; i <= N; i++)
        cin >> input_vector[i];

#ifdef DEBUG
    cout << "[INFO] input" << endl;
    for (int i = 1; i <= N; i++)
        cout << "\t" << input_vector[i] << endl;
#endif

    int max = input_vector[N];
    int anger_cnt = 0;
    for (int i = N - 1; i >= 2; i--)
    {
        if (input_vector[i] > max)
        {
            anger_cnt++;
            max = input_vector[i];
        }
    }

    cout << anger_cnt << endl;
    return 0;
}