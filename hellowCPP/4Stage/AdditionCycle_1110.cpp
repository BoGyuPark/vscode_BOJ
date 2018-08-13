//https://www.acmicpc.net/problem/1110
#include <iostream>
using namespace std;
int main()
{
    int N, First, Second, NewNum, count=0, sum, FirstNum;
    cin>>N;
    FirstNum = N;
    while(1)
    {
        if(N<10)
        {
            First = 0;
            Second = N;
        }
        else
        {
            First = N/10;
            Second = N%10;
        }
        sum = First + Second;
        NewNum = Second*10 + sum%10;
        count++;
        if(FirstNum == NewNum)
        {
            cout<<count<<'\n';
            break;
        }
        N = NewNum;
    }
    
    return 0;
}