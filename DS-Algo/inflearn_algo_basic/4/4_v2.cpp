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

    int min_val = 2147000000;
    int max_val = -2147000000;
    for(int i=0;i<N;i++){
        int temp;
        cin >> temp;
        if(temp < min_val)
            min_val = temp;
        if(temp > max_val)
            max_val = temp;
    }
    
    printf("%d",max_val - min_val);

    return 0;
}