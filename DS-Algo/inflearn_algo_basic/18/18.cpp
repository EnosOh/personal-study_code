#include <iostream>

using namespace std;

int main()
{
    int N, noise_threshold;
    cin >> N >> noise_threshold;

    int temp_noise;
    int max_consecutive_alarms = -1;
    int temp_consecutive_alrams = 0;
    for (int i = 1; i <= N; i++)
    {
        cin >> temp_noise;
        if (temp_noise > noise_threshold)
            temp_consecutive_alrams++;
        else temp_consecutive_alrams=0;
        if(temp_consecutive_alrams > max_consecutive_alarms)
            max_consecutive_alarms = temp_consecutive_alrams;
    }

    cout << max_consecutive_alarms << endl;

    return 0;
}