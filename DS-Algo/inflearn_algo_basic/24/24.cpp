#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> jolly_check_vector(N, 0);

    int curr_input = 0;
    int prev_input = 0;

    cin >> prev_input;
    for (int i = 2; i <= N; i++)
    {
        cin >> curr_input;
        if (abs(curr_input - prev_input) < N)
            jolly_check_vector[abs(curr_input - prev_input)]++;
        prev_input = curr_input;
    }

    for (int i = 1; i < N; i++)
    {
#ifdef DEBUG
        cout << "[INFO] jolly_check_vector[" << i << "] = " << jolly_check_vector[i] << endl;
#endif
        if (jolly_check_vector[i] != 1)
        {
            cout << "NO" << endl;
            exit(-1);
        }
    }
    cout << "Yes" << endl;
}