#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin >> a >> b;

    int total =0;
    for(int i = a; i <b; i++)
    {
        total += i;
        if(i == b){
            cout << i;
            continue;
        }
        cout << i << " + ";
    }
    cout << " = " << total;
    return 0;
}