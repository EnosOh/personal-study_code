#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> A_vector(N+1);

    for(int i=1; i<=N; i++)
        cin >> A_vector[i];
    
    int temp_B_input;
    int result = 0;
    for(int i=1; i<=N; i++)
    {
        cin >> temp_B_input;
        result = A_vector[i] - temp_B_input;
        if(result  == -2 || result == 1)
            cout << "A" << endl;
        else if(result == -1 || result == 2)
            cout << "B" << endl;
        else 
            cout << "D" << endl;
    }
    return 0;
}