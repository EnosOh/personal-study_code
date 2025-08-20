#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int input_num;
    cin >> input_num;

    vector<int> each_divisor_cnt_vector(input_num+1); 
    
    for(int i=1;i<=input_num;i++)
    {
        for(int j=i;j<=input_num;j+=i)
            each_divisor_cnt_vector[j]++;
    }

    for(int i=1;i<=input_num;i++)
        cout<< each_divisor_cnt_vector[i] << ' ';
        
    return 0;
}