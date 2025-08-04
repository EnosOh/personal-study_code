#include<iostream>
using namespace std;

int main()
{
    int N,M;
    cin >> N >> M;
    
    int total =0;
    for(int i=1; i<=N; i++)
    {
        if(i%M == 0)
            total += i;
    }
    cout << total;
    return 0;
}