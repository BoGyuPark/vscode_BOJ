//https://www.acmicpc.net/problem/11720
#include<iostream>
using namespace std;
main()
{
    int N;
    cin>>N;
    int sum=0;
    char num[101]={0,};
    cin>>num;
    for(int i=0; i<N; i++){
        sum += num[i]-'0';
    }
    cout<<sum<<endl;
}