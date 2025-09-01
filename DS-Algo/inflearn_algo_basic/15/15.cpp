#include <iostream>
#include <vector>

using namespace std;

/*
    @brief : find prime number in 1 ~ <input> and return count (20 -> 8)
    @param : n(int)
    @return : prime_num_cnt(int)
*/
int countPrimeNum(int n)
{
    vector<int> prime_judge_vector(n + 1, 0);
    for (int i = 2; i * i <= n; i++)
    {
        if(prime_judge_vector[i] == 1) continue;
        for (int j = i*i; j <= n; j += i) // i+i -> i*i better
            prime_judge_vector[j]++;
    }


    int prime_num_cnt = 0;
    for (int i = 2; i <= n; i++)
    {
#ifdef DEBUG
      //  cout << i << " : " << prime_judge_vector[i] << endl;
#endif
        if (prime_judge_vector[i] == 0)
            prime_num_cnt++;
    }
    
    return prime_num_cnt;
}

int main()
{
    int N;
    cin >> N;
    int prime_num_cnt = countPrimeNum(N);
    cout << prime_num_cnt;
    return 0;
}