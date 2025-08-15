#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin >> N;
    if (N < 2 || N > 100)
    {
        printf("[Invalid input] please input 2 <= N <= 100");
        return -1;
    }

    vector<int> age_vector;
    for (int i = 0; i < N; i++)
    {
        int temp;
        cin >> temp;
        age_vector.push_back(temp);
    }

    auto max_val = *(max_element(age_vector.begin(), age_vector.end()));
    auto min_val = *(min_element(age_vector.begin(), age_vector.end()));

    cout << max_val - min_val << endl;

    return 0;
}