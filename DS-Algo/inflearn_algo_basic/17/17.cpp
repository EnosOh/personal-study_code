#include <iostream>

using namespace std;

/*
    @brief : 1 ~ N sum (e.g. n=3 -> 1+2+3 = 6 return 6)
    @param : n(int)
    @return : total(int)
*/
int getUpToNSum(int n)
{
    int total = 0;
    for (int i = 1; i <= n; i++)
        total += i;
    return total;
}

/*
    @brief : compare to param check it is correct or not
    @param : n(int) ,ans(int) -> n : prob ans : answer of prob
    @return : false or true   
*/
bool isCorrect(int n, int ans)
{
    int student_ans = getUpToNSum(n);
    if(student_ans == ans)
        return true;
    else return false; 

}

int main()
{
#ifdef DEBUG
    cout <<"[INFO] getUpToSum(10) : " <<getUpToNSum(10) << endl;
    cout << "[INFO] isCorrect(20 350) :" << isCorrect(20,350) << endl;
#endif

    int N;
    int temp_prob,temp_ans;
    cin >> N;

    for(int i=1;i<=N;i++)
    {
        cin >> temp_prob >> temp_ans;
        if(isCorrect(temp_prob,temp_ans) == true)
            cout << "YES"<<endl;
        else cout << "NO"<<endl;
    }

    return 0;
}