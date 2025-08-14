#include<iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int total = 1;
    cout << "1";
    for(int i=2;i<N/2+1;i++)
    {
       if(N%i == 0)
       {
            cout << " + " << i;
            total += i; 
       }
    }

    cout << " = " << total;

    return 0;
}