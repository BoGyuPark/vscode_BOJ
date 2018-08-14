//https://www.acmicpc.net/problem/2577
#include <iostream>
using namespace std;
int main()
{
    int A, B, C;
    int numArr[10]={0,};
    cin>>A>>B>>C;
    //최대 1000*1000*1000 : 백만
    int result;
    result = A*B*C;

    while(result!=0)
    {
        numArr[result%10]++;
        result/=10;
    }

    for(int j=0; j<10; j++){
        cout<<numArr[j]<<'\n';
    }

    return 0;

}