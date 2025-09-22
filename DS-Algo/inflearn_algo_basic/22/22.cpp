#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;

    vector<int> temperature_vector(N + 1);
    for (int i = 1; i <= N; i++)
        cin >> temperature_vector[i];

    int max = 0;
    for (int i = 1; i <= K; i++)
        max += temperature_vector[i];

#ifdef DEBUG
    cout << "[INFO] max : " << max << endl;
#endif

    int temp_total = max;
    for (int i = K + 1; i <= N; i++)
    {
        temp_total = temp_total + temperature_vector[i] - temperature_vector[(i - K)];
        if (max < temp_total)
            max = temp_total;
#ifdef DEBUG
        cout << "[INFO] temp_total : " << temp_total << endl;
#endif
    }

    cout << max;
    return 0;
}