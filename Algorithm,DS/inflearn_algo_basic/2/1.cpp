#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin >> a >> b;

    int total =0;
    int i = 0;
    for(i = a; i < b; i++)
    {
        total += i;
        cout << i << " + ";
    }
    cout << i << " = " << total+i;
    return 0;
}
