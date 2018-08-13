//https://www.acmicpc.net/problem/2440
#include <iostream>
using namespace std;
main()
{
    int N;
    cin>>N;
    for(int i=0; i<=N;i++){
        for(int j=N; j>i; j--){
            cout<<"*";
        }
        cout<<endl;
    }
}